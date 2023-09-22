//author: xhoraz02

#include "logicboard.h"
#include<QDebug>

LogicBoard::LogicBoard(){
    addFigureToBoard(new LogicFigureRook(true), 0,0);
    addFigureToBoard(new LogicFigureKnight(true), 0,1);
    addFigureToBoard(new LogicFigureBishop(true), 0,2);
    addFigureToBoard(new LogicFigureQueen(true), 0,3);
    addFigureToBoard(new LogicFigureKing(true), 0,4);
    addFigureToBoard(new LogicFigureBishop(true), 0,5);
    addFigureToBoard(new LogicFigureKnight(true), 0,6);
    addFigureToBoard(new LogicFigureRook(true), 0,7);

    addFigureToBoard(new LogicFigurePawn(true), 1,0);
    addFigureToBoard(new LogicFigurePawn(true), 1,1);
    addFigureToBoard(new LogicFigurePawn(true), 1,2);
    addFigureToBoard(new LogicFigurePawn(true), 1,3);
    addFigureToBoard(new LogicFigurePawn(true), 1,4);
    addFigureToBoard(new LogicFigurePawn(true), 1,5);
    addFigureToBoard(new LogicFigurePawn(true), 1,6);
    addFigureToBoard(new LogicFigurePawn(true), 1,7);

    for (int i = 0; i < 8; ++i) {
        for (int j = 2; j < 6; ++j) {
            addFigureToBoard(nullptr, j,i);
        }
    }

    addFigureToBoard(new LogicFigurePawn(false), 6,0);
    addFigureToBoard(new LogicFigurePawn(false), 6,1);
    addFigureToBoard(new LogicFigurePawn(false), 6,2);
    addFigureToBoard(new LogicFigurePawn(false), 6,3);
    addFigureToBoard(new LogicFigurePawn(false), 6,4);
    addFigureToBoard(new LogicFigurePawn(false), 6,5);
    addFigureToBoard(new LogicFigurePawn(false), 6,6);
    addFigureToBoard(new LogicFigurePawn(false), 6,7);

    addFigureToBoard(new LogicFigureRook(false), 7,0);
    addFigureToBoard(new LogicFigureKnight(false), 7,1);
    addFigureToBoard(new LogicFigureBishop(false), 7,2);
    addFigureToBoard(new LogicFigureQueen(false), 7,3);
    addFigureToBoard(new LogicFigureKing(false), 7,4);
    addFigureToBoard(new LogicFigureBishop(false), 7,5);
    addFigureToBoard(new LogicFigureKnight(false), 7,6);
    addFigureToBoard(new LogicFigureRook(false), 7,7);

}

LogicBoard::~LogicBoard(){
    for(std::list<LogicFigure *>::iterator it = allFigures.begin(); it != allFigures.end(); ++it){
        delete * it;
    }
}

LogicFigure * LogicBoard::nextRound(LogicCoordinates * start,LogicCoordinates * end)
{


    LogicFigure * result = board[end->x][end->y];
    LogicFigure * myFigure = board[start->x][start->y];

    std::list<LogicCoordinates> listOfMoves = myFigure->possibleMove(board, *start);

    bool possible = false;
    for(std::list<LogicCoordinates>::iterator iter = listOfMoves.begin(); iter != listOfMoves.end(); ++iter){
        if ((* iter) == (* end)){
            possible = true;
            break;
        }
    }

    if (possible)
    {
        board[end->x][end->y] = board[start->x][start->y];
        board[start->x][start->y] = nullptr;
    }

    return result;
}

void LogicBoard::addFigureToBoard(LogicFigure * fig,int x, int y)
{
    allFigures.push_back(fig);
    board[x][y] = fig;
}
