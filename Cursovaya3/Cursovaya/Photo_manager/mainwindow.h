#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QLabel>
#include <QListWidgetItem>
#include <QImage>
#include <QColor>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:

    void on_listWidget_itemDoubleClicked(QListWidgetItem *item);

    void on_action_Open_File_triggered();

    void on_action_Zoom_in_triggered();

    void on_action_Zoom_out_triggered();

    void on_action_Original_size_triggered();

    void on_action_Adjust_the_size_triggered();

    void on_actionSave_File_triggered();

    void on_pushButton_2_clicked();

private:
    Ui::MainWindow *ui;
    QLabel * imageLabel;
    void setImagesList(QString FileName);
    QImage origin;
    QImage view;
    qreal saturation = 0;

    void setOrigin(QString path);
};
#endif // MAINWINDOW_H
