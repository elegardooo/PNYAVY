#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "imageitem.h"
#include <QPixmap>
#include <QFileDialog>
#include <QFileInfo>
#include <QDebug>
#include "math.h"

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent), ui(new Ui::MainWindow)
{
    //setFixedSize(1500, 1000);
    ui->setupUi(this);
    imageLabel = new QLabel(this);
    imageLabel->setSizePolicy(QSizePolicy::Ignored,QSizePolicy::Ignored);
    imageLabel->setScaledContents(true);
    ui->scrollArea->setWidget(imageLabel);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_action_Open_File_triggered()
{
    QString fileName = QFileDialog::getOpenFileName(this,
                                                    "Выбрать изображение", "",
                                                    "Изображения (*.bmp  *.jpg *.png)");
    QPixmap pix(fileName);
    imageLabel->setPixmap(pix);
    imageLabel->setFixedSize(pix.width(),pix.height());
    setImagesList(fileName);
    setOrigin(fileName);
}

void MainWindow::setImagesList(QString FileName)
{
    ui->listWidget->clear();
    QFileInfo info(FileName);
    QDir dir(info.absoluteDir());
    QStringList filtr;
    filtr << "*.jpg" << "*.png" << "*.bmp";
    qDebug() << dir.entryInfoList(filtr);
    QFileInfoList list = dir.entryInfoList(filtr);
    // Добавляем изображения в listWidget
    for (int i = 0;i < list.count();i++) {
        QFileInfo f = list.at(i);
        QPixmap pix(f.filePath());
        int w = pix.width();
        int h = pix.height();
        double fSize =f.size() / 1024.;
        QString Info = QString::number(w) + "x" + QString::number(h) + ", " + QString::number(round(fSize * 10) / 10) + "KB";
        QListWidgetItem *item = new QListWidgetItem(ui->listWidget);
        Imageitem *imgitem = new Imageitem;
        imgitem->setData(pix.scaledToWidth(90,Qt::SmoothTransformation),f.fileName(),Info, f.filePath());
        item->setSizeHint(imgitem->sizeHint());
        ui->listWidget->setItemWidget(item,imgitem);
    }
}

void MainWindow::setOrigin(QString path)
{
    saturation = 0;
    origin = QImage(path);
}

void MainWindow::on_listWidget_itemDoubleClicked(QListWidgetItem *item)
{
    //qDebug() << "Double clicked";
    Imageitem *imgitem = qobject_cast <Imageitem*>(ui->listWidget->itemWidget(item));
    QPixmap pix(imgitem->getPath());
    imageLabel->setPixmap(pix);
    imageLabel->setFixedSize(pix.width(), pix.height());
    //qDebug() << imgitem->getPath();
}




void MainWindow::on_action_Zoom_in_triggered()
{
    int New_width = int(imageLabel->width() * 1.25);
    int New_height = int(imageLabel->height() * 1.25);
    imageLabel->setFixedSize(New_width, New_height);
}


void MainWindow::on_action_Zoom_out_triggered()
{
    int New_width = int(imageLabel->width() * 0.75);
    int New_height = int(imageLabel->height() * 0.75);
    imageLabel->setFixedSize(New_width, New_height);
}


void MainWindow::on_action_Original_size_triggered()
{
    imageLabel->setFixedSize(imageLabel->pixmap(Qt::ReturnByValue).size());
}


void MainWindow::on_action_Adjust_the_size_triggered()
{
    if (imageLabel->width() > imageLabel->height())
    {
    double Size_factor = double(ui->scrollArea->width()) / imageLabel->width();
    imageLabel->setFixedSize(int(imageLabel->width() * Size_factor) - 2, int(imageLabel->height() * Size_factor) - 2);
    }
    else
    {
    double Size_factor = double(ui->scrollArea->height()) / imageLabel->height();
    imageLabel->setFixedSize(int(imageLabel->width() * Size_factor) - 2, int(imageLabel->height() * Size_factor) - 2);
    }
}


void MainWindow::on_actionSave_File_triggered()
{
    QString fileName = QFileDialog::getSaveFileName(this,
                                                    "Выбрать изображение", "",
                                                    "Изображения (*.bmp  *.jpg *.png)");
    //imageLabel->pixmap()->save(fileName);
    imageLabel->pixmap(Qt::ReturnByValue).save(fileName);
}


void MainWindow::on_pushButton_2_clicked()
{

}

