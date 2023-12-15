#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "imageitem.h"
#include <QPixmap>
#include <QFileDialog>
#include <QFileInfo>
#include <QMessageBox>
#include <QInputDialog>
#include <QDebug>
#include "math.h"
#include <string>

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
    QString fileName = QFileDialog::getOpenFileName(this, "Выбрать изображение", "", "Изображения (*.bmp  *.jpg *.png)");
    //QString fileName = QFileDialog::getExistingDirectory(this, "Выбрать папку", QDir::currentPath(), QFileDialog::DontUseNativeDialog);

    qDebug() << fileName;
    if(fileName == "")
        return;
    setImagesList(fileName);
    setOrigin(fileName);
    QPixmap pix(fileName);
    imageLabel->setPixmap(pix);
    imageLabel->setFixedSize(pix.width(),pix.height());
}

void MainWindow::setImagesList(QString FileName)
{
    ui->listWidget->clear();
    QFileInfo info(FileName);
    fileDir = info.absolutePath();
    QDir dir(info.absoluteDir());
    QStringList filtr;
    filtr << "*.jpg" << "*.png" << "*.bmp";
    //qDebug() << dir.entryInfoList(filtr);
    QFileInfoList list = dir.entryInfoList(filtr);
    if(list.count() < 1)
    {
        QPixmap pix(FileName);
        setOrigin("");
        imageLabel->setPixmap(pix);
        imageLabel->setFixedSize(pix.width(),pix.height());
        return;
    }
    QPixmap pix(list.at(0).filePath());
    setOrigin(list.at(0).filePath());
    imageLabel->setPixmap(pix);
    imageLabel->setFixedSize(pix.width(),pix.height());
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
    QFileInfo info(path);
    this->fileName = info.fileName();
    this->path=path;
    //qDebug() << this->fileName;
    //qDebug() << this->path;
}

void MainWindow::on_listWidget_itemDoubleClicked(QListWidgetItem *item)
{
    //qDebug() << "Double clicked";
    Imageitem *imgitem = qobject_cast <Imageitem*>(ui->listWidget->itemWidget(item));
    QPixmap pix(imgitem->getPath());
    imageLabel->setPixmap(pix);
    imageLabel->setFixedSize(pix.width(), pix.height());   
    setOrigin(imgitem->getPath());
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
    QString fileName = QFileDialog::getSaveFileName(this, "Выбрать изображение", "", "Изображения (*.bmp  *.jpg *.png)");
    //imageLabel->pixmap()->save(fileName);
    imageLabel->pixmap(Qt::ReturnByValue).save(fileName);
}


void MainWindow::on_actionChoose_directory_to_move_this_photo_triggered()
{
    destName = QFileDialog::getExistingDirectory(this, "Выбрать папку", QDir::currentPath(), QFileDialog::DontUseNativeDialog);
}


void MainWindow::on_Move_Photo_Button_clicked()
{

    if(destName == "" || path == "" || fileName == "")
    {
    QMessageBox::warning(this, "Error", "There is no photo/directory to move");
    return;
    }
    QString source = fileDir + "/" + fileName;
    QString destination = destName + "/" + fileName;
    QFile::copy(source, destination);
    QFile::remove(source);
    setImagesList(source);
    qDebug() << path;
    qDebug() << destName;
    qDebug() << fileName;
}


void MainWindow::on_Rename_Photo_Button_clicked()
{
    if(path == "" || fileName == "")
    {
    QMessageBox::warning(this, "Error", "There is no photo to rename");
    return;
    }
    QString text = QInputDialog::getText(this,"Rename Photo","New photo name:");
    if(text == "")
    {
    //QMessageBox::warning(this, "Error", "Empty name");
    return;
    }
    if(text[0] == ' ')
    {
    QMessageBox::warning(this, "Error", "Name can't start with spacebar");
    return;
    }
    QFileInfo info(path);
    //qDebug() << info.suffix();
    QFile::rename(path, fileDir + "/" + text + "." + info.suffix());
    setImagesList(fileDir + "/" + fileName);
}

