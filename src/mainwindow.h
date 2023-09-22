//author: xhoraz02

#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include "LogicGame.h"
#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    LogicGame game;

    void setChessUnderGround();
    void updateChess();
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:

    void on_stepBack_clicked();

    void on_stepNext_clicked();

    void on_submitInput_clicked();

    void on_loadFile_clicked();

    void on_listWidget_currentRowChanged(int currentRow);

    void on_autoPlay_toggled(bool checked);

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
