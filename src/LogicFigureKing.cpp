//author: xhoraz02

#include "LogicFigureKing.h"

LogicFigureKing::LogicFigureKing(bool w){
    name = "král";
    iconw = ":/icons/king_w.png";
    iconb = ":/icons/king_b.png";
    white = w;
}

LogicFigureKing::~LogicFigureKing(){
    ;
}


std::list<LogicCoordinates> LogicFigureKing::possibleMove(LogicFigure * board[8][8], LogicCoordinates cor){
    std::list<LogicCoordinates> result;
    qDebug("king");

    LogicCoordinates controlled(cor.x,cor.y);

    for (int i = -1; i < 2; ++i) {
        for (int j = -1; j < 2; ++j) {
            if(i==j && i==0)
                continue;
            if(cor.x+i<0 || cor.x+i>7 || cor.y+j<0 || cor.y+j>7)
                continue;

            if (board[cor.x+i][cor.y+j]==nullptr){
                controlled.x=cor.x+i;
                controlled.y=cor.y+j;
                result.push_back(controlled);
            }
            else if (board[cor.x+i][cor.y+j]->white!=white){
                controlled.x=cor.x+i;
                controlled.y=cor.y+j;
                result.push_back(controlled);
            }
        }
    }
    return result;
}
