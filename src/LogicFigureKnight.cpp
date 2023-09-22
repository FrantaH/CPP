//author: xhoraz02

#include "LogicFigureKnight.h"


LogicFigureKnight::LogicFigureKnight(bool w){
    name = "kůň";
    iconw = ":/icons/knight_w.png";
    iconb = ":/icons/knight_b.png";
    white = w;
    }

LogicFigureKnight::~LogicFigureKnight(){
    ;
}

std::list<LogicCoordinates> LogicFigureKnight::possibleMove(LogicFigure * board[8][8], LogicCoordinates cor){
    std::list<LogicCoordinates> result;
    qDebug("knight");
    LogicCoordinates controlled(cor.x,cor.y);

    controlled.x = controlled.x+2;
    controlled.y = controlled.y+1;
    if(controlled.x<8 && controlled.x>=0 && controlled.y<8 && controlled.y>=0)
    {
        if (board[controlled.x][controlled.y]==nullptr || board[controlled.x][controlled.y]->white!=white){
            result.push_back(controlled);
        }
    }

    controlled.y = controlled.y-2;
    if(controlled.x<8 && controlled.x>=0 && controlled.y<8 && controlled.y>=0)
    {
        if (board[controlled.x][controlled.y]==nullptr || board[controlled.x][controlled.y]->white!=white){
            result.push_back(controlled);
        }
    }

    controlled.y = controlled.y-1;
    controlled.x = controlled.x-1;
    if(controlled.x<8 && controlled.x>=0 && controlled.y<8 && controlled.y>=0)
    {
        if (board[controlled.x][controlled.y]==nullptr || board[controlled.x][controlled.y]->white!=white){
            result.push_back(controlled);
        }
    }

    controlled.x = controlled.x-2;
    if(controlled.x<8 && controlled.x>=0 && controlled.y<8 && controlled.y>=0)
    {
        if (board[controlled.x][controlled.y]==nullptr || board[controlled.x][controlled.y]->white!=white){
            result.push_back(controlled);
        }
    }

    controlled.x = controlled.x-1;
    controlled.y = controlled.y+1;
    if(controlled.x<8 && controlled.x>=0 && controlled.y<8 && controlled.y>=0)
    {
        if (board[controlled.x][controlled.y]==nullptr || board[controlled.x][controlled.y]->white!=white){
            result.push_back(controlled);
        }
    }

    controlled.y = controlled.y+2;
    if(controlled.x<8 && controlled.x>=0 && controlled.y<8 && controlled.y>=0)
    {
        if (board[controlled.x][controlled.y]==nullptr || board[controlled.x][controlled.y]->white!=white){
            result.push_back(controlled);
        }
    }

    controlled.y = controlled.y+1;
    controlled.x = controlled.x+1;
    if(controlled.x<8 && controlled.x>=0 && controlled.y<8 && controlled.y>=0)
    {
        if (board[controlled.x][controlled.y]==nullptr || board[controlled.x][controlled.y]->white!=white){
            result.push_back(controlled);
        }
    }

    controlled.x = controlled.x+2;
    if(controlled.x<8 && controlled.x>=0 && controlled.y<8 && controlled.y>=0)
    {
        if (board[controlled.x][controlled.y]==nullptr || board[controlled.x][controlled.y]->white!=white){
            result.push_back(controlled);
        }
    }
    return result;
}
