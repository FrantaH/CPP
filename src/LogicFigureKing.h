//author: xhoraz02

#ifndef LOGIC_KING_H
#define LOGIC_KING_H

#include "LogicFigure.h"

class LogicFigureKing : public LogicFigure
{
public:
    /**
     * @brief LogicFigureKing
     * konstruktor, který naplní jméno, cesty k ikonám podle typu objektu (tedy king)
     * a podle parametru, zda je bílá
     * @param w - bílá
     */
    LogicFigureKing(bool w);
    ~LogicFigureKing();

    /**
     * @brief possibleMove
     * podle pravidel vypočítá, kam se může král pohnout
     * tedy o jedno políčko kolem sebe
     * @param board - stav šachovnice
     * @param cor - počáteční pozice figurky
     * @return - list možných pohybů
     */
    std::list<LogicCoordinates> possibleMove(LogicFigure * board[8][8], LogicCoordinates cor);
};

#endif // LOGIC_KING_H
