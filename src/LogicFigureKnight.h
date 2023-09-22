//author: xhoraz02

#ifndef LOGIC_FIGURE_KNIGHT_H
#define LOGIC_FIGURE_KNIGHT_H

#include "LogicFigure.h"

class LogicFigureKnight : public LogicFigure
{
public:
    /**
     * @brief LogicFigureKnight
     * konstruktor, který naplní jméno, cesty k ikonám podle typu objektu (tedy knight)
     * a podle parametru, zda je bílá
     * @param w - bílá
     */
    LogicFigureKnight(bool w);
    ~LogicFigureKnight();

    /**
     * @brief possibleMove
     * podle pravidel vypočítá, kam se může jezdec pohnout
     * tedy do L kolem sebe (8 možností)
     * @param board - stav šachovnice
     * @param cor - počáteční pozice figurky
     * @return - list možných pohybů
     */
    std::list<LogicCoordinates> possibleMove(LogicFigure * board[8][8], LogicCoordinates cor);
};

#endif // LOGIC_FIGURE_KNIGHT_H
