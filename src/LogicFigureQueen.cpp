//author: xhoraz02

#include "LogicFigureQueen.h"

LogicFigureQueen::LogicFigureQueen(bool w){
    name = "královna";
    iconw = ":/icons/queen_w.png";
    iconb = ":/icons/queen_b.png";
    white = w;
    }

LogicFigureQueen::~LogicFigureQueen(){
    ;
}

std::list<LogicCoordinates> LogicFigureQueen::possibleMove(LogicFigure * board[8][8], LogicCoordinates cor){
    std::list<LogicCoordinates> result;
    qDebug("qeen");
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
    while (controlled.x<8 && controlled.y>=0)
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
    while (controlled.x<8 && controlled.y<8)
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
    while (controlled.x>=0 && controlled.y<8)
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

    //nahoru
    controlled.x=cor.x-1;
    controlled.y=cor.y;
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
    while (controlled.x<8)
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
    while (controlled.y<8)
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
