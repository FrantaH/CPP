//author: xhoraz02

#ifndef LOGIC_FIGURE_QUEEN_H
#define LOGIC_FIGURE_QUEEN_H

#include "LogicFigure.h"

class LogicFigureQueen : public LogicFigure
{
public:
    /**
     * @brief LogicFigureQueen
     * konstruktor, který naplní jméno, cesty k ikonám podle typu objektu (tedy queen)
     * a podle parametru, zda je bílá
     * @param w - bílá
     */
    LogicFigureQueen(bool w);
    ~LogicFigureQueen();

    /**
     * @brief possibleMove
     * podle pravidel vypočítá, kam se může dáma pohnout
     * tedy jako věž a střelec dohromady po diagonálách a sloupcích
     * @param board - stav šachovnice
     * @param cor - počáteční pozice figurky
     * @return - list možných pohybů
     */
    std::list<LogicCoordinates> possibleMove(LogicFigure * board[8][8], LogicCoordinates cor);
};

#endif // LOGIC_FIGURE_QUEEN_H
