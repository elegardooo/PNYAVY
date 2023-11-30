#include <QMainWindow>
#include <QGridLayout>
#include "imageitem.h"

Imageitem::Imageitem(QWidget *parent) : QWidget(parent)
{
    img = new QLabel(this);
    title = new QLabel(this);
    info = new QLabel(this);
    QGridLayout *grid = new QGridLayout(this);
    grid->addWidget(img, 0, 0, 0, 1);
    grid->addWidget(title, 0, 1);
    grid->addWidget(info, 1, 1);
}

void Imageitem::setData(QPixmap Image, QString TitleText, QString InfoText, QString Path)
{
    this->img->setPixmap(Image);
    this->img->setFixedWidth(Image.width());
    this->title->setText(TitleText);
    this->info->setText(InfoText);
    this->path = Path;
}

QString Imageitem::getPath()
{
    return this->path;
}

