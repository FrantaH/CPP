//author: xhoraz02

#include "LogicFigureRook.h"

LogicFigureRook::LogicFigureRook(bool w){
    name = "věž";
    iconw = ":/icons/rook_w.png";
    iconb = ":/icons/rook_b.png";
    white = w;
    }

LogicFigureRook::~LogicFigureRook(){
    ;
}

std::list<LogicCoordinates> LogicFigureRook::possibleMove(LogicFigure * board[8][8], LogicCoordinates cor){
    std::list<LogicCoordinates> result;
    qDebug("rook");
    //nahoru
    LogicCoordinates controlled(cor.x-1,cor.y);
    while (controlled.x>=0)
    {
        if (board[controlled.x][controlled.y]==nullptr){
            result.push_back(controlled);
        }
        else if (board[controlled.x][controlled.y]->white!=white){
            result.push_back(controlled);
            break;
        }
        controlled.x--;
    }
    //doprava
    controlled.x=cor.x;
    controlled.y=cor.y-1;
    while (controlled.y>=0)
    {
        if (board[controlled.x][controlled.y]==nullptr){
            result.push_back(controlled);
        }
        else if (board[controlled.x][controlled.y]->white!=white){
            result.push_back(controlled);
            break;
        }
        controlled.y--;
    }
    //dolu
    controlled.x=cor.x+1;
    controlled.y=cor.y;
    while (controlled.x<=8)
    {
        if (board[controlled.x][controlled.y]==nullptr){
            result.push_back(controlled);
        }
        else if (board[controlled.x][controlled.y]->white!=white){
            result.push_back(controlled);
            break;
        }
        controlled.x++;
    }

    //doleva
    controlled.x=cor.x;
    controlled.y=cor.y+1;
    while (controlled.y<=8)
    {
        if (board[controlled.x][controlled.y]==nullptr){
            result.push_back(controlled);
        }
        else if (board[controlled.x][controlled.y]->white!=white){
            result.push_back(controlled);
            break;
        }
        controlled.y++;
    }


    return result;
}
