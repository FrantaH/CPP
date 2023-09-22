//author: xhoraz02


#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "LogicGame.h"
#include <QFileDialog>
#include <QMessageBox>
#include <QTextStream>
#include <QFile>


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setChessUnderGround();
    updateChess();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::updateChess()
{
    for (int i = 0; i < 64; i++) {
        QPushButton * myButton = (QPushButton *) ui->gridLayout->itemAt(i)->widget();
        if (game.board.board[i/8][i%8]!=nullptr){
            if (game.board.board[i/8][i%8]->white){
                myButton->setIcon(QIcon(QString::fromStdString(game.board.board[i/8][i%8]->iconw )));
                if(((i%2)+(i/8))%2)
                    myButton->setStyleSheet("QPushButton {background-color: #ffd749; color: white;}");
                else
                    myButton->setStyleSheet("QPushButton {background-color: brown; color: white;}");
            }else{
                myButton->setIcon(QIcon(QString::fromStdString(game.board.board[i/8][i%8]->iconb )));
                if(((i%2)+(i/8))%2)
                    myButton->setStyleSheet("QPushButton {background-color: #ffd749; color: black;}");
                else
                    myButton->setStyleSheet("QPushButton {background-color: brown; color: black;}");

            }
            myButton->setIconSize(QSize(25,25));
        } else {
            ((QPushButton *) ui->gridLayout->itemAt(i)->widget())->setIcon(QIcon());
        }
    }
    //qDebug("po update chess");
}

void MainWindow::setChessUnderGround()
{
    for (int i = 0; i < 64; i++) {
        if(((i%2)+(i/8))%2)
            ui->gridLayout->itemAt(i)->widget()->setStyleSheet("background-color: #ffd749");
        else
            ui->gridLayout->itemAt(i)->widget()->setStyleSheet("background-color: brown");

    }
}

void MainWindow::on_stepNext_clicked()
{
        game.nextRound();
        ui->listWidget->setCurrentRow((std::distance(game.rounds.begin(),game.it))/2);        //ui->currentTurn->setText(QString::fromStdString(to_string((std::distance(game.rounds.begin(), game.it)+1)/2)));
        updateChess();
}

void MainWindow::on_stepBack_clicked()
{
    //qDebug("KLIK");
    game.backRound();
    ui->listWidget->setCurrentRow(std::distance(game.rounds.begin(),game.it)/2);    //ui->currentTurn->setText(QString::fromStdString(to_string((std::distance(game.rounds.begin(), game.it)+1)/2)));
    updateChess();
}

void MainWindow::on_submitInput_clicked()
{
    std::string utf8_text = ui->turnsList->toPlainText().toUtf8().constData();
    game.updateRounds(utf8_text);
    ui->listWidget->clear();
    ui->listWidget->addItems(ui->turnsList->toPlainText().split('\n'));
    ui->listWidget->setCurrentRow(std::distance(game.rounds.begin(),game.it)/2);
    updateChess();
}

void MainWindow::on_loadFile_clicked()
{
    QString fileName=QFileDialog::getOpenFileName(this,tr("Open your game"),".\\","(*.chessGame)");
    QFile file(fileName);
    if(!file.open(QFile::ReadOnly | QFile::Text)){
        QMessageBox::warning(this,"file","file counldnt be opened");
    }

    QTextStream input(&file);

    QString inputString = input.readAll();
    game.updateRounds(inputString.toUtf8().constData());

    ui->listWidget->addItems(inputString.split('\n'));
    ui->listWidget->setCurrentRow(0);
    ui->turnsList->setText(inputString);
    file.close();
}

void MainWindow::on_listWidget_currentRowChanged(int currentRow)
{
    if(std::distance(game.rounds.begin(),game.it)<(currentRow*2)){
        for (long long int i = std::distance(game.rounds.begin(),game.it); i < ((currentRow)*2); ++i) {
            game.nextRound();
        }
    } else {
        for (long long int i = std::distance(game.rounds.begin(),game.it); i > ((currentRow+1)*2); --i) {
            game.backRound();
        }
    }
    updateChess();
}

/*void MainWindow::on_autoPlay_clicked()
{
    QTimer *timer = new QTimer(this);
    connect(timer, SIGNAL(timeout()), this, SLOT(on_stepNext_clicked()));
    timer->start(1000);
}*/

void MainWindow::on_autoPlay_toggled(bool checked)
{
    if(checked){
        connect(game.timer, SIGNAL(timeout()), this, SLOT(on_stepNext_clicked()));
        game.timer->start(1000);
        ui->autoPlay->setText("stop");
    } else {
        game.timer->stop();
        game.timer->disconnect();
        ui->autoPlay->setText("play");
    }
}
