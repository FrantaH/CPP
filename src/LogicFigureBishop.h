//author: xhoraz02

#ifndef LOGIC_FIGURE_BISHOP_H
#define LOGIC_FIGURE_BISHOP_H

#include "LogicFigure.h"

class LogicFigureBishop : public LogicFigure
{
public:
    /**
     * @brief LogicFigureBishop
     * konstruktor, který naplní jméno, cesty k ikonám podle typu objektu (tedy bishop)
     * a podle parametru, zda je bílá
     * @param w - bílá
     */
    LogicFigureBishop(bool w);
    ~LogicFigureBishop();

    /**
     * @brief possibleMove
     * podle pravidel vypočítá, kam se může střelec pohnout
     * tedy diagonály
     * jde po diagonále, doku nenarazí na figurku
     * takto projde všechny
     * @param board - stav šachovnice
     * @param cor - počáteční pozice figurky
     * @return - list možných pohybů
     */
    std::list<LogicCoordinates> possibleMove(LogicFigure * board[8][8], LogicCoordinates cor);
};

#endif // LOGIC_FIGURE_BISHOP_H
