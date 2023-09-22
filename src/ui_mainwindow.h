/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QPushButton *stepNext;
    QPushButton *stepBack;
    QWidget *layoutWidget;
    QGridLayout *gridLayout_3;
    QLabel *label_18;
    QHBoxLayout *horizontalLayout;
    QLabel *label_10;
    QLabel *label_11;
    QLabel *label_12;
    QLabel *label_13;
    QLabel *label_14;
    QLabel *label_15;
    QLabel *label_16;
    QLabel *label_17;
    QVBoxLayout *verticalLayout;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QGridLayout *gridLayout;
    QPushButton *B2;
    QPushButton *A2;
    QPushButton *E4;
    QPushButton *D8;
    QPushButton *F1;
    QPushButton *C7;
    QPushButton *A3;
    QPushButton *H1;
    QPushButton *H7;
    QPushButton *A6;
    QPushButton *D3;
    QPushButton *D7;
    QPushButton *G2;
    QPushButton *F4;
    QPushButton *G7;
    QPushButton *A7;
    QPushButton *F6;
    QPushButton *G3;
    QPushButton *B5;
    QPushButton *F7;
    QPushButton *C1;
    QPushButton *C4;
    QPushButton *A1;
    QPushButton *D4;
    QPushButton *C5;
    QPushButton *D5;
    QPushButton *F5;
    QPushButton *B1;
    QPushButton *E2;
    QPushButton *H2;
    QPushButton *H4;
    QPushButton *A4;
    QPushButton *F3;
    QPushButton *A5;
    QPushButton *H5;
    QPushButton *G4;
    QPushButton *C8;
    QPushButton *E1;
    QPushButton *G5;
    QPushButton *F8;
    QPushButton *G1;
    QPushButton *C6;
    QPushButton *C2;
    QPushButton *H3;
    QPushButton *H6;
    QPushButton *A8;
    QPushButton *H8;
    QPushButton *B3;
    QPushButton *E6;
    QPushButton *B8;
    QPushButton *B4;
    QPushButton *E8;
    QPushButton *B6;
    QPushButton *E7;
    QPushButton *D2;
    QPushButton *B7;
    QPushButton *E5;
    QPushButton *D6;
    QPushButton *E3;
    QPushButton *G8;
    QPushButton *C3;
    QPushButton *F2;
    QPushButton *D1;
    QPushButton *G6;
    QTextBrowser *turnsList;
    QPushButton *submitInput;
    QListWidget *listWidget;
    QPushButton *loadFile;
    QPushButton *autoPlay;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(647, 608);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        stepNext = new QPushButton(centralWidget);
        stepNext->setObjectName(QString::fromUtf8("stepNext"));
        stepNext->setGeometry(QRect(180, 410, 75, 23));
        stepBack = new QPushButton(centralWidget);
        stepBack->setObjectName(QString::fromUtf8("stepBack"));
        stepBack->setGeometry(QRect(80, 410, 75, 23));
        layoutWidget = new QWidget(centralWidget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(50, 10, 401, 381));
        gridLayout_3 = new QGridLayout(layoutWidget);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        label_18 = new QLabel(layoutWidget);
        label_18->setObjectName(QString::fromUtf8("label_18"));

        gridLayout_3->addWidget(label_18, 0, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_10 = new QLabel(layoutWidget);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        QFont font;
        font.setPointSize(10);
        font.setBold(true);
        font.setWeight(75);
        label_10->setFont(font);
        label_10->setAlignment(Qt::AlignBottom|Qt::AlignHCenter);

        horizontalLayout->addWidget(label_10);

        label_11 = new QLabel(layoutWidget);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setFont(font);
        label_11->setAlignment(Qt::AlignBottom|Qt::AlignHCenter);

        horizontalLayout->addWidget(label_11);

        label_12 = new QLabel(layoutWidget);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setFont(font);
        label_12->setAlignment(Qt::AlignBottom|Qt::AlignHCenter);

        horizontalLayout->addWidget(label_12);

        label_13 = new QLabel(layoutWidget);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setFont(font);
        label_13->setAlignment(Qt::AlignBottom|Qt::AlignHCenter);

        horizontalLayout->addWidget(label_13);

        label_14 = new QLabel(layoutWidget);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setFont(font);
        label_14->setAlignment(Qt::AlignBottom|Qt::AlignHCenter);

        horizontalLayout->addWidget(label_14);

        label_15 = new QLabel(layoutWidget);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setFont(font);
        label_15->setAlignment(Qt::AlignBottom|Qt::AlignHCenter);

        horizontalLayout->addWidget(label_15);

        label_16 = new QLabel(layoutWidget);
        label_16->setObjectName(QString::fromUtf8("label_16"));
        label_16->setFont(font);
        label_16->setAlignment(Qt::AlignBottom|Qt::AlignHCenter);

        horizontalLayout->addWidget(label_16);

        label_17 = new QLabel(layoutWidget);
        label_17->setObjectName(QString::fromUtf8("label_17"));
        label_17->setFont(font);
        label_17->setAlignment(Qt::AlignBottom|Qt::AlignHCenter);

        horizontalLayout->addWidget(label_17);


        gridLayout_3->addLayout(horizontalLayout, 0, 1, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setFont(font);
        label_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        verticalLayout->addWidget(label_2);

        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setFont(font);
        label_3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        verticalLayout->addWidget(label_3);

        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setFont(font);
        label_4->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        verticalLayout->addWidget(label_4);

        label_5 = new QLabel(layoutWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setFont(font);
        label_5->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        verticalLayout->addWidget(label_5);

        label_6 = new QLabel(layoutWidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setFont(font);
        label_6->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        verticalLayout->addWidget(label_6);

        label_7 = new QLabel(layoutWidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setFont(font);
        label_7->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        verticalLayout->addWidget(label_7);

        label_8 = new QLabel(layoutWidget);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setFont(font);
        label_8->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        verticalLayout->addWidget(label_8);

        label_9 = new QLabel(layoutWidget);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setFont(font);
        label_9->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        verticalLayout->addWidget(label_9);


        gridLayout_3->addLayout(verticalLayout, 1, 0, 1, 1);

        gridLayout = new QGridLayout();
        gridLayout->setSpacing(0);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setSizeConstraint(QLayout::SetMaximumSize);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(1);
        sizePolicy.setVerticalStretch(1);
        A1 = new QPushButton(layoutWidget);
                A1->setObjectName(QString::fromUtf8("A1"));
                sizePolicy.setHeightForWidth(A1->sizePolicy().hasHeightForWidth());
                A1->setSizePolicy(sizePolicy);

                gridLayout->addWidget(A1, 0, 0, 1, 1);

                B1 = new QPushButton(layoutWidget);
                B1->setObjectName(QString::fromUtf8("B1"));
                sizePolicy.setHeightForWidth(B1->sizePolicy().hasHeightForWidth());
                B1->setSizePolicy(sizePolicy);

                gridLayout->addWidget(B1, 0, 1, 1, 1);

                C1 = new QPushButton(layoutWidget);
                C1->setObjectName(QString::fromUtf8("C1"));
                sizePolicy.setHeightForWidth(C1->sizePolicy().hasHeightForWidth());
                C1->setSizePolicy(sizePolicy);

                gridLayout->addWidget(C1, 0, 2, 1, 1);

                D1 = new QPushButton(layoutWidget);
                D1->setObjectName(QString::fromUtf8("D1"));
                sizePolicy.setHeightForWidth(D1->sizePolicy().hasHeightForWidth());
                D1->setSizePolicy(sizePolicy);

                gridLayout->addWidget(D1, 0, 3, 1, 1);

                E1 = new QPushButton(layoutWidget);
                E1->setObjectName(QString::fromUtf8("E1"));
                sizePolicy.setHeightForWidth(E1->sizePolicy().hasHeightForWidth());
                E1->setSizePolicy(sizePolicy);

                gridLayout->addWidget(E1, 0, 4, 1, 1);

                F1 = new QPushButton(layoutWidget);
                F1->setObjectName(QString::fromUtf8("F1"));
                sizePolicy.setHeightForWidth(F1->sizePolicy().hasHeightForWidth());
                F1->setSizePolicy(sizePolicy);

                gridLayout->addWidget(F1, 0, 5, 1, 1);

                G1 = new QPushButton(layoutWidget);
                G1->setObjectName(QString::fromUtf8("G1"));
                sizePolicy.setHeightForWidth(G1->sizePolicy().hasHeightForWidth());
                G1->setSizePolicy(sizePolicy);

                gridLayout->addWidget(G1, 0, 6, 1, 1);

                H1 = new QPushButton(layoutWidget);
                H1->setObjectName(QString::fromUtf8("H1"));
                sizePolicy.setHeightForWidth(H1->sizePolicy().hasHeightForWidth());
                H1->setSizePolicy(sizePolicy);

                gridLayout->addWidget(H1, 0, 7, 1, 1);

                A2 = new QPushButton(layoutWidget);
                A2->setObjectName(QString::fromUtf8("A2"));
                sizePolicy.setHeightForWidth(A2->sizePolicy().hasHeightForWidth());
                A2->setSizePolicy(sizePolicy);

                gridLayout->addWidget(A2, 1, 0, 1, 1);

                B2 = new QPushButton(layoutWidget);
                B2->setObjectName(QString::fromUtf8("B2"));
                sizePolicy.setHeightForWidth(B2->sizePolicy().hasHeightForWidth());
                B2->setSizePolicy(sizePolicy);

                gridLayout->addWidget(B2, 1, 1, 1, 1);

                C2 = new QPushButton(layoutWidget);
                C2->setObjectName(QString::fromUtf8("C2"));
                sizePolicy.setHeightForWidth(C2->sizePolicy().hasHeightForWidth());
                C2->setSizePolicy(sizePolicy);

                gridLayout->addWidget(C2, 1, 2, 1, 1);

                D2 = new QPushButton(layoutWidget);
                D2->setObjectName(QString::fromUtf8("D2"));
                sizePolicy.setHeightForWidth(D2->sizePolicy().hasHeightForWidth());
                D2->setSizePolicy(sizePolicy);

                gridLayout->addWidget(D2, 1, 3, 1, 1);

                E2 = new QPushButton(layoutWidget);
                E2->setObjectName(QString::fromUtf8("E2"));
                sizePolicy.setHeightForWidth(E2->sizePolicy().hasHeightForWidth());
                E2->setSizePolicy(sizePolicy);

                gridLayout->addWidget(E2, 1, 4, 1, 1);

                F2 = new QPushButton(layoutWidget);
                F2->setObjectName(QString::fromUtf8("F2"));
                sizePolicy.setHeightForWidth(F2->sizePolicy().hasHeightForWidth());
                F2->setSizePolicy(sizePolicy);

                gridLayout->addWidget(F2, 1, 5, 1, 1);

                G2 = new QPushButton(layoutWidget);
                G2->setObjectName(QString::fromUtf8("G2"));
                sizePolicy.setHeightForWidth(G2->sizePolicy().hasHeightForWidth());
                G2->setSizePolicy(sizePolicy);

                gridLayout->addWidget(G2, 1, 6, 1, 1);

                H2 = new QPushButton(layoutWidget);
                H2->setObjectName(QString::fromUtf8("H2"));
                sizePolicy.setHeightForWidth(H2->sizePolicy().hasHeightForWidth());
                H2->setSizePolicy(sizePolicy);

                gridLayout->addWidget(H2, 1, 7, 1, 1);

                A3 = new QPushButton(layoutWidget);
                A3->setObjectName(QString::fromUtf8("A3"));
                sizePolicy.setHeightForWidth(A3->sizePolicy().hasHeightForWidth());
                A3->setSizePolicy(sizePolicy);

                gridLayout->addWidget(A3, 2, 0, 1, 1);

                B3 = new QPushButton(layoutWidget);
                B3->setObjectName(QString::fromUtf8("B3"));
                sizePolicy.setHeightForWidth(B3->sizePolicy().hasHeightForWidth());
                B3->setSizePolicy(sizePolicy);

                gridLayout->addWidget(B3, 2, 1, 1, 1);

                C3 = new QPushButton(layoutWidget);
                C3->setObjectName(QString::fromUtf8("C3"));
                sizePolicy.setHeightForWidth(C3->sizePolicy().hasHeightForWidth());
                C3->setSizePolicy(sizePolicy);

                gridLayout->addWidget(C3, 2, 2, 1, 1);

                D3 = new QPushButton(layoutWidget);
                D3->setObjectName(QString::fromUtf8("D3"));
                sizePolicy.setHeightForWidth(D3->sizePolicy().hasHeightForWidth());
                D3->setSizePolicy(sizePolicy);

                gridLayout->addWidget(D3, 2, 3, 1, 1);

                E3 = new QPushButton(layoutWidget);
                E3->setObjectName(QString::fromUtf8("E3"));
                sizePolicy.setHeightForWidth(E3->sizePolicy().hasHeightForWidth());
                E3->setSizePolicy(sizePolicy);

                gridLayout->addWidget(E3, 2, 4, 1, 1);

                F3 = new QPushButton(layoutWidget);
                F3->setObjectName(QString::fromUtf8("F3"));
                sizePolicy.setHeightForWidth(F3->sizePolicy().hasHeightForWidth());
                F3->setSizePolicy(sizePolicy);

                gridLayout->addWidget(F3, 2, 5, 1, 1);

                G3 = new QPushButton(layoutWidget);
                G3->setObjectName(QString::fromUtf8("G3"));
                sizePolicy.setHeightForWidth(G3->sizePolicy().hasHeightForWidth());
                G3->setSizePolicy(sizePolicy);

                gridLayout->addWidget(G3, 2, 6, 1, 1);

                H3 = new QPushButton(layoutWidget);
                H3->setObjectName(QString::fromUtf8("H3"));
                sizePolicy.setHeightForWidth(H3->sizePolicy().hasHeightForWidth());
                H3->setSizePolicy(sizePolicy);

                gridLayout->addWidget(H3, 2, 7, 1, 1);

                A4 = new QPushButton(layoutWidget);
                A4->setObjectName(QString::fromUtf8("A4"));
                sizePolicy.setHeightForWidth(A4->sizePolicy().hasHeightForWidth());
                A4->setSizePolicy(sizePolicy);

                gridLayout->addWidget(A4, 3, 0, 1, 1);

                B4 = new QPushButton(layoutWidget);
                B4->setObjectName(QString::fromUtf8("B4"));
                sizePolicy.setHeightForWidth(B4->sizePolicy().hasHeightForWidth());
                B4->setSizePolicy(sizePolicy);

                gridLayout->addWidget(B4, 3, 1, 1, 1);

                C4 = new QPushButton(layoutWidget);
                C4->setObjectName(QString::fromUtf8("C4"));
                sizePolicy.setHeightForWidth(C4->sizePolicy().hasHeightForWidth());
                C4->setSizePolicy(sizePolicy);

                gridLayout->addWidget(C4, 3, 2, 1, 1);

                D4 = new QPushButton(layoutWidget);
                D4->setObjectName(QString::fromUtf8("D4"));
                sizePolicy.setHeightForWidth(D4->sizePolicy().hasHeightForWidth());
                D4->setSizePolicy(sizePolicy);

                gridLayout->addWidget(D4, 3, 3, 1, 1);

                E4 = new QPushButton(layoutWidget);
                E4->setObjectName(QString::fromUtf8("E4"));
                sizePolicy.setHeightForWidth(E4->sizePolicy().hasHeightForWidth());
                E4->setSizePolicy(sizePolicy);

                gridLayout->addWidget(E4, 3, 4, 1, 1);

                F4 = new QPushButton(layoutWidget);
                F4->setObjectName(QString::fromUtf8("F4"));
                sizePolicy.setHeightForWidth(F4->sizePolicy().hasHeightForWidth());
                F4->setSizePolicy(sizePolicy);

                gridLayout->addWidget(F4, 3, 5, 1, 1);

                G4 = new QPushButton(layoutWidget);
                G4->setObjectName(QString::fromUtf8("G4"));
                sizePolicy.setHeightForWidth(G4->sizePolicy().hasHeightForWidth());
                G4->setSizePolicy(sizePolicy);

                gridLayout->addWidget(G4, 3, 6, 1, 1);

                H4 = new QPushButton(layoutWidget);
                H4->setObjectName(QString::fromUtf8("H4"));
                sizePolicy.setHeightForWidth(H4->sizePolicy().hasHeightForWidth());
                H4->setSizePolicy(sizePolicy);

                gridLayout->addWidget(H4, 3, 7, 1, 1);

                A5 = new QPushButton(layoutWidget);
                A5->setObjectName(QString::fromUtf8("A5"));
                sizePolicy.setHeightForWidth(A5->sizePolicy().hasHeightForWidth());
                A5->setSizePolicy(sizePolicy);

                gridLayout->addWidget(A5, 4, 0, 1, 1);

                B5 = new QPushButton(layoutWidget);
                B5->setObjectName(QString::fromUtf8("B5"));
                sizePolicy.setHeightForWidth(B5->sizePolicy().hasHeightForWidth());
                B5->setSizePolicy(sizePolicy);

                gridLayout->addWidget(B5, 4, 1, 1, 1);

                C5 = new QPushButton(layoutWidget);
                C5->setObjectName(QString::fromUtf8("C5"));
                sizePolicy.setHeightForWidth(C5->sizePolicy().hasHeightForWidth());
                C5->setSizePolicy(sizePolicy);

                gridLayout->addWidget(C5, 4, 2, 1, 1);

                D5 = new QPushButton(layoutWidget);
                D5->setObjectName(QString::fromUtf8("D5"));
                sizePolicy.setHeightForWidth(D5->sizePolicy().hasHeightForWidth());
                D5->setSizePolicy(sizePolicy);

                gridLayout->addWidget(D5, 4, 3, 1, 1);

                E5 = new QPushButton(layoutWidget);
                E5->setObjectName(QString::fromUtf8("E5"));
                sizePolicy.setHeightForWidth(E5->sizePolicy().hasHeightForWidth());
                E5->setSizePolicy(sizePolicy);

                gridLayout->addWidget(E5, 4, 4, 1, 1);

                F5 = new QPushButton(layoutWidget);
                F5->setObjectName(QString::fromUtf8("F5"));
                sizePolicy.setHeightForWidth(F5->sizePolicy().hasHeightForWidth());
                F5->setSizePolicy(sizePolicy);

                gridLayout->addWidget(F5, 4, 5, 1, 1);

                G5 = new QPushButton(layoutWidget);
                G5->setObjectName(QString::fromUtf8("G5"));
                sizePolicy.setHeightForWidth(G5->sizePolicy().hasHeightForWidth());
                G5->setSizePolicy(sizePolicy);

                gridLayout->addWidget(G5, 4, 6, 1, 1);

                H5 = new QPushButton(layoutWidget);
                H5->setObjectName(QString::fromUtf8("H5"));
                sizePolicy.setHeightForWidth(H5->sizePolicy().hasHeightForWidth());
                H5->setSizePolicy(sizePolicy);

                gridLayout->addWidget(H5, 4, 7, 1, 1);

                A6 = new QPushButton(layoutWidget);
                A6->setObjectName(QString::fromUtf8("A6"));
                sizePolicy.setHeightForWidth(A6->sizePolicy().hasHeightForWidth());
                A6->setSizePolicy(sizePolicy);

                gridLayout->addWidget(A6, 5, 0, 1, 1);

                B6 = new QPushButton(layoutWidget);
                B6->setObjectName(QString::fromUtf8("B6"));
                sizePolicy.setHeightForWidth(B6->sizePolicy().hasHeightForWidth());
                B6->setSizePolicy(sizePolicy);

                gridLayout->addWidget(B6, 5, 1, 1, 1);

                C6 = new QPushButton(layoutWidget);
                C6->setObjectName(QString::fromUtf8("C6"));
                sizePolicy.setHeightForWidth(C6->sizePolicy().hasHeightForWidth());
                C6->setSizePolicy(sizePolicy);

                gridLayout->addWidget(C6, 5, 2, 1, 1);

                D6 = new QPushButton(layoutWidget);
                D6->setObjectName(QString::fromUtf8("D6"));
                sizePolicy.setHeightForWidth(D6->sizePolicy().hasHeightForWidth());
                D6->setSizePolicy(sizePolicy);

                gridLayout->addWidget(D6, 5, 3, 1, 1);

                E6 = new QPushButton(layoutWidget);
                E6->setObjectName(QString::fromUtf8("E6"));
                sizePolicy.setHeightForWidth(E6->sizePolicy().hasHeightForWidth());
                E6->setSizePolicy(sizePolicy);

                gridLayout->addWidget(E6, 5, 4, 1, 1);

                F6 = new QPushButton(layoutWidget);
                F6->setObjectName(QString::fromUtf8("F6"));
                sizePolicy.setHeightForWidth(F6->sizePolicy().hasHeightForWidth());
                F6->setSizePolicy(sizePolicy);

                gridLayout->addWidget(F6, 5, 5, 1, 1);

                G6 = new QPushButton(layoutWidget);
                G6->setObjectName(QString::fromUtf8("G6"));
                sizePolicy.setHeightForWidth(G6->sizePolicy().hasHeightForWidth());
                G6->setSizePolicy(sizePolicy);

                gridLayout->addWidget(G6, 5, 6, 1, 1);

                H6 = new QPushButton(layoutWidget);
                H6->setObjectName(QString::fromUtf8("H6"));
                sizePolicy.setHeightForWidth(H6->sizePolicy().hasHeightForWidth());
                H6->setSizePolicy(sizePolicy);

                gridLayout->addWidget(H6, 5, 7, 1, 1);

                A7 = new QPushButton(layoutWidget);
                A7->setObjectName(QString::fromUtf8("A7"));
                sizePolicy.setHeightForWidth(A7->sizePolicy().hasHeightForWidth());
                A7->setSizePolicy(sizePolicy);

                gridLayout->addWidget(A7, 6, 0, 1, 1);

                B7 = new QPushButton(layoutWidget);
                B7->setObjectName(QString::fromUtf8("B7"));
                sizePolicy.setHeightForWidth(B7->sizePolicy().hasHeightForWidth());
                B7->setSizePolicy(sizePolicy);

                gridLayout->addWidget(B7, 6, 1, 1, 1);

                C7 = new QPushButton(layoutWidget);
                C7->setObjectName(QString::fromUtf8("C7"));
                sizePolicy.setHeightForWidth(C7->sizePolicy().hasHeightForWidth());
                C7->setSizePolicy(sizePolicy);

                gridLayout->addWidget(C7, 6, 2, 1, 1);

                D7 = new QPushButton(layoutWidget);
                D7->setObjectName(QString::fromUtf8("D7"));
                sizePolicy.setHeightForWidth(D7->sizePolicy().hasHeightForWidth());
                D7->setSizePolicy(sizePolicy);

                gridLayout->addWidget(D7, 6, 3, 1, 1);

                E7 = new QPushButton(layoutWidget);
                E7->setObjectName(QString::fromUtf8("E7"));
                sizePolicy.setHeightForWidth(E7->sizePolicy().hasHeightForWidth());
                E7->setSizePolicy(sizePolicy);

                gridLayout->addWidget(E7, 6, 4, 1, 1);

                F7 = new QPushButton(layoutWidget);
                F7->setObjectName(QString::fromUtf8("F7"));
                sizePolicy.setHeightForWidth(F7->sizePolicy().hasHeightForWidth());
                F7->setSizePolicy(sizePolicy);

                gridLayout->addWidget(F7, 6, 5, 1, 1);

                G7 = new QPushButton(layoutWidget);
                G7->setObjectName(QString::fromUtf8("G7"));
                sizePolicy.setHeightForWidth(G7->sizePolicy().hasHeightForWidth());
                G7->setSizePolicy(sizePolicy);

                gridLayout->addWidget(G7, 6, 6, 1, 1);

                H7 = new QPushButton(layoutWidget);
                H7->setObjectName(QString::fromUtf8("H7"));
                sizePolicy.setHeightForWidth(H7->sizePolicy().hasHeightForWidth());
                H7->setSizePolicy(sizePolicy);

                gridLayout->addWidget(H7, 6, 7, 1, 1);

                A8 = new QPushButton(layoutWidget);
                A8->setObjectName(QString::fromUtf8("A8"));
                sizePolicy.setHeightForWidth(A8->sizePolicy().hasHeightForWidth());
                A8->setSizePolicy(sizePolicy);

                gridLayout->addWidget(A8, 7, 0, 1, 1);

                B8 = new QPushButton(layoutWidget);
                B8->setObjectName(QString::fromUtf8("B8"));
                sizePolicy.setHeightForWidth(B8->sizePolicy().hasHeightForWidth());
                B8->setSizePolicy(sizePolicy);

                gridLayout->addWidget(B8, 7, 1, 1, 1);

                C8 = new QPushButton(layoutWidget);
                C8->setObjectName(QString::fromUtf8("C8"));
                sizePolicy.setHeightForWidth(C8->sizePolicy().hasHeightForWidth());
                C8->setSizePolicy(sizePolicy);

                gridLayout->addWidget(C8, 7, 2, 1, 1);

                D8 = new QPushButton(layoutWidget);
                D8->setObjectName(QString::fromUtf8("D8"));
                sizePolicy.setHeightForWidth(D8->sizePolicy().hasHeightForWidth());
                D8->setSizePolicy(sizePolicy);

                gridLayout->addWidget(D8, 7, 3, 1, 1);

                E8 = new QPushButton(layoutWidget);
                E8->setObjectName(QString::fromUtf8("E8"));
                sizePolicy.setHeightForWidth(E8->sizePolicy().hasHeightForWidth());
                E8->setSizePolicy(sizePolicy);

                gridLayout->addWidget(E8, 7, 4, 1, 1);

                F8 = new QPushButton(layoutWidget);
                F8->setObjectName(QString::fromUtf8("F8"));
                sizePolicy.setHeightForWidth(F8->sizePolicy().hasHeightForWidth());
                F8->setSizePolicy(sizePolicy);

                gridLayout->addWidget(F8, 7, 5, 1, 1);

                G8 = new QPushButton(layoutWidget);
                G8->setObjectName(QString::fromUtf8("G8"));
                sizePolicy.setHeightForWidth(G8->sizePolicy().hasHeightForWidth());
                G8->setSizePolicy(sizePolicy);

                gridLayout->addWidget(G8, 7, 6, 1, 1);

                H8 = new QPushButton(layoutWidget);
                H8->setObjectName(QString::fromUtf8("H8"));
                sizePolicy.setHeightForWidth(H8->sizePolicy().hasHeightForWidth());
                H8->setSizePolicy(sizePolicy);

                gridLayout->addWidget(H8, 7, 7, 1, 1);

        gridLayout->setRowStretch(0, 1);
        gridLayout->setColumnStretch(0, 1);

        gridLayout_3->addLayout(gridLayout, 1, 1, 1, 1);

        turnsList = new QTextBrowser(centralWidget);
        turnsList->setObjectName(QString::fromUtf8("turnsList"));
        turnsList->setGeometry(QRect(40, 460, 151, 51));
        turnsList->setOverwriteMode(true);
        turnsList->setTextInteractionFlags(Qt::LinksAccessibleByKeyboard|Qt::LinksAccessibleByMouse|Qt::TextBrowserInteraction|Qt::TextEditable|Qt::TextEditorInteraction|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);
        submitInput = new QPushButton(centralWidget);
        submitInput->setObjectName(QString::fromUtf8("submitInput"));
        submitInput->setGeometry(QRect(40, 520, 75, 23));
        listWidget = new QListWidget(centralWidget);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));
        listWidget->setGeometry(QRect(470, 10, 151, 341));
        loadFile = new QPushButton(centralWidget);
        loadFile->setObjectName(QString::fromUtf8("loadFile"));
        loadFile->setGeometry(QRect(470, 370, 75, 23));
        autoPlay = new QPushButton(centralWidget);
        autoPlay->setObjectName(QString::fromUtf8("autoPlay"));
        autoPlay->setGeometry(QRect(290, 410, 75, 23));
        autoPlay->setCheckable(true);
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 647, 21));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        stepNext->setText(QApplication::translate("MainWindow", "next step", nullptr));
        stepBack->setText(QApplication::translate("MainWindow", "step back", nullptr));
        label_18->setText(QString());
        label_10->setText(QApplication::translate("MainWindow", "A", nullptr));
        label_11->setText(QApplication::translate("MainWindow", "B", nullptr));
        label_12->setText(QApplication::translate("MainWindow", "C", nullptr));
        label_13->setText(QApplication::translate("MainWindow", "D", nullptr));
        label_14->setText(QApplication::translate("MainWindow", "E", nullptr));
        label_15->setText(QApplication::translate("MainWindow", "F", nullptr));
        label_16->setText(QApplication::translate("MainWindow", "G", nullptr));
        label_17->setText(QApplication::translate("MainWindow", "H", nullptr));
        label_2->setText(QApplication::translate("MainWindow", "1", nullptr));
        label_3->setText(QApplication::translate("MainWindow", "2", nullptr));
        label_4->setText(QApplication::translate("MainWindow", "3", nullptr));
        label_5->setText(QApplication::translate("MainWindow", "4", nullptr));
        label_6->setText(QApplication::translate("MainWindow", "5", nullptr));
        label_7->setText(QApplication::translate("MainWindow", "6", nullptr));
        label_8->setText(QApplication::translate("MainWindow", "7", nullptr));
        label_9->setText(QApplication::translate("MainWindow", "8", nullptr));
        B2->setText(QString());
        A2->setText(QString());
        D8->setText(QString());
        C7->setText(QString());
        A3->setText(QString());
        H7->setText(QString());
        A6->setText(QString());
        D7->setText(QString());
        G7->setText(QString());
        A7->setText(QString());
        F6->setText(QString());
        B5->setText(QString());
        F7->setText(QString());
        C1->setText(QString());
        C4->setText(QString());
        A1->setText(QString());
        D4->setText(QString());
        C5->setText(QString());
        D5->setText(QString());
        F5->setText(QString());
        B1->setText(QString());
        E2->setText(QString());
        A4->setText(QString());
        A5->setText(QString());
        H5->setText(QString());
        C8->setText(QString());
        E1->setText(QString());
        G5->setText(QString());
        F8->setText(QString());
        C6->setText(QString());
        C2->setText(QString());
        H6->setText(QString());
        A8->setText(QString());
        H8->setText(QString());
        B3->setText(QString());
        E6->setText(QString());
        B8->setText(QString());
        B4->setText(QString());
        E8->setText(QString());
        B6->setText(QString());
        E7->setText(QString());
        D2->setText(QString());
        B7->setText(QString());
        E5->setText(QString());
        D6->setText(QString());
        G8->setText(QString());
        D1->setText(QString());
        G6->setText(QString());
        submitInput->setText(QApplication::translate("MainWindow", "submit game", nullptr));
        loadFile->setText(QApplication::translate("MainWindow", "Load file", nullptr));
        autoPlay->setText(QApplication::translate("MainWindow", "play", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
