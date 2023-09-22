//author: xhoraz02

#include "LogicFigurePawn.h"
#include <QDebug>

LogicFigurePawn::LogicFigurePawn(bool w){
    name = "pěšec";
    iconw = ":/icons/pawn_w.png";
    iconb = ":/icons/pawn_b.png";
    white = w;
    }

LogicFigurePawn::~LogicFigurePawn(){
    ;
}

std::list<LogicCoordinates> LogicFigurePawn::possibleMove(LogicFigure * board[8][8], LogicCoordinates cor){
    //board = rozložení figurek
    //cor = pozice, ze které chce vykročit
    qDebug("pawn");
    std::list<LogicCoordinates> result;
    LogicCoordinates controlled(cor.x,cor.y);

    bool white = board[cor.x][cor.y]->white;
    if (white)
    {
        if (board[cor.x+1][cor.y]==nullptr){

            controlled.x++;
            result.push_back(controlled);

            if (cor.x==1) //výchozí pozice
            {

                if (board[cor.x+2][cor.y]==nullptr){
                    controlled.x++;
                    result.push_back(controlled);

                }
            }
        }
        controlled.x=cor.x+1;

        if (board[cor.x+1][cor.y+1]!=nullptr){
            if (board[cor.x+1][cor.y+1]->white!=white){
                controlled.y = cor.y+1;
                result.push_back(controlled);
            }
        }
        if (board[cor.x+1][cor.y-1]!=nullptr){
            if (board[cor.x+1][cor.y-1]->white!=white){
                controlled.y=cor.y-1;
                result.push_back(controlled);
            }
        }

    } else {

        if (board[cor.x-1][cor.y]==nullptr){
            controlled.x--;
            result.push_back(controlled);

            if (cor.x==6) //výchozí pozice
            {
                if (board[cor.x-2][cor.y]==nullptr){
                    controlled.x--;
                    result.push_back(controlled);
                }
            }
        }
        controlled.x=cor.x-1;
        if (cor.y<7 && board[cor.x-1][cor.y+1]!=nullptr){
            if (board[cor.x-1][cor.y+1]->white!=white){
                controlled.y=cor.y+1;
                result.push_back(controlled);
            }
        }
        if(cor.y>0 && board[cor.x-1][cor.y-1]!=nullptr){
            if (board[cor.x-1][cor.y-1]->white!=white){
                controlled.y=cor.y-1;
                result.push_back(controlled);
            }
        }
    }
    return result;
}
