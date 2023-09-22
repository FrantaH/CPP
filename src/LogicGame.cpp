//author: xhoraz02


#include "LogicGame.h"
#include <QDebug>
#include <sstream>
#include <string>
#include <algorithm>
#include <cstdlib>



LogicGame::LogicGame()
{
    it = rounds.begin();
    timer = new QTimer();
}

void LogicGame::nextRound()
{
    if(it == rounds.end()){
        //qDebug("return");
        return;}


    if(board.board[(*it)->start->x][(*it)->start->y]->white!=whiteOnTurn)
        return; // figurka není na tahu

    LogicFigure * figure = board.nextRound((*it)->start,(*it)->end);
    (*it)->kicked = figure;
    it++;
    whiteOnTurn = !whiteOnTurn;
}

void LogicGame::backRound()
{
    if(it == rounds.begin()){
        qDebug("it--");
        return;}
    //qDebug("it--");
    it--;

    board.board[(*it)->start->x][(*it)->start->y] = board.board[(*it)->end->x][(*it)->end->y];
    board.board[(*it)->end->x][(*it)->end->y] = (*it)->kicked;
    whiteOnTurn = !whiteOnTurn;
}

void LogicGame::updateRounds(std::string input)
{
    for (unsigned int all = 0; all < rounds.size(); ++all) {
        if(it == rounds.begin())
            break;

        it--;

        board.board[(*it)->start->x][(*it)->start->y] = board.board[(*it)->end->x][(*it)->end->y];
        board.board[(*it)->end->x][(*it)->end->y] = (*it)->kicked;
        whiteOnTurn = !whiteOnTurn;
    }

    rounds.clear();
    std::istringstream iss(input);
    int i = 0;
    for (std::string line; std::getline(iss, line); i++)    //procházet po řádcích vstup
    {
        std::stringstream myLine(line);
        std::string segment;
        int xTarget;
        int yTarget;
        int xStart;
        int yStart;
        int j = 0;
        while(std::getline(myLine,segment,' '))     //procházet řádek po "slovech"
        {

            if (j==0){
                ;
            } else if (j==1 || j==2) {
                if (segment.end() != segment.erase(std::remove(segment.begin(), segment.end(), '+'), segment.end()));
                    ;//qDebug("+ in turn");
                if (segment.end() != segment.erase(std::remove(segment.begin(), segment.end(), '#'), segment.end()));
                    ;//qDebug("# in turn");
                if (segment.end() != segment.erase(std::remove(segment.begin(), segment.end(), 'x'), segment.end()));
                    ;//qDebug("x in turn");

                if (segment.length()>3)
                {


                    xTarget = *(&segment.back())-'1';
                    segment.pop_back();

                    yTarget = *(&segment.back())-'a';
                    segment.pop_back();

                    xStart = *(&segment.back())-'1';
                    segment.pop_back();

                    yStart = *(&segment.back())-'a';

                    rounds.push_back(new LogicRound(new LogicCoordinates(xStart,yStart),new LogicCoordinates(xTarget,yTarget)));
                }

            } else {        //moc mezer na řádku
                return;//chyba
                //třeba ignorovat tento krok
            }
            j++;
        }
    }
    it = rounds.begin();
}
