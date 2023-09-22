//author: xhoraz02

#ifndef LOGIC_FIGURE_ROOK_H
#define LOGIC_FIGURE_ROOK_H

#include "LogicFigure.h"

class LogicFigureRook : public LogicFigure
{
public:
    /**
     * @brief LogicFigureRook
     * konstruktor, který naplní jméno, cesty k ikonám podle typu objektu (tedy rook)
     * a podle parametru, zda je bílá
     * @param w - bílá
     */
    LogicFigureRook(bool w);
    ~LogicFigureRook();

    /**
     * @brief possibleMove
     * podle pravidel vypočítá, kam se může věž pohnout
     * tedy po sloupcích a řadách
     * @param board - stav šachovnice
     * @param cor - počáteční pozice figurky
     * @return - list možných pohybů
     */
    std::list<LogicCoordinates> possibleMove(LogicFigure * board[8][8], LogicCoordinates cor);
};

#endif // LOGIC_FIGURE_ROOK_H
