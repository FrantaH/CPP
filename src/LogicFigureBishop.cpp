//author: xhoraz02

#include "LogicFigureBishop.h"

LogicFigureBishop::LogicFigureBishop(bool w){
    name = "střelec";
    iconw = ":/icons/bishop_w.png";
    iconb = ":/icons/bishop_b.png";
    white = w;
}

LogicFigureBishop::~LogicFigureBishop(){
    ;
}

std::list<LogicCoordinates> LogicFigureBishop::possibleMove(LogicFigure * board[8][8], LogicCoordinates cor){
    std::list<LogicCoordinates> result;
    qDebug("bishop");
    //nahoru doleva
    LogicCoordinates controlled(cor.x-1,cor.y-1);
    while (controlled.x>=0 && controlled.y>=0)
    {
        if (board[controlled.x][controlled.y]==nullptr){
            result.push_back(controlled);
        }
        else if (board[controlled.x][controlled.y]->white!=white){
            result.push_back(controlled);
            break;
        }
        controlled.x--;
        controlled.y--;
    }
    //nahoru doprava
    controlled.x=cor.x+1;
    controlled.y=cor.y-1;
    while (controlled.x<=8 && controlled.y>=0)
    {
        if (board[controlled.x][controlled.y]==nullptr){
            result.push_back(controlled);
        }
        else if (board[controlled.x][controlled.y]->white!=white){
            result.push_back(controlled);
            break;
        }
        controlled.x++;
        controlled.y--;
    }
    //dolu doprava
    controlled.x=cor.x+1;
    controlled.y=cor.y+1;
    while (controlled.x<=8 && controlled.y<=8)
    {
        if (board[controlled.x][controlled.y]==nullptr){
            result.push_back(controlled);
        }
        else if (board[controlled.x][controlled.y]->white!=white){
            result.push_back(controlled);
            break;
        }
        controlled.x++;
        controlled.y++;
    }

    //dolu doleva
    controlled.x=cor.x-1;
    controlled.y=cor.y+1;
    while (controlled.x>=0 && controlled.y<=8)
    {
        if (board[controlled.x][controlled.y]==nullptr){
            result.push_back(controlled);
        }
        else if (board[controlled.x][controlled.y]->white!=white){
            result.push_back(controlled);
            break;
        }
        controlled.x--;
        controlled.y++;
    }
    return result;
}
