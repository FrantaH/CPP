//author: xhoraz02

#ifndef LOGIC_FIGURE_PAWN_H
#define LOGIC_FIGURE_PAWN_H

#include "LogicFigure.h"

class LogicFigurePawn : public LogicFigure
{
public:
    /**
     * @brief LogicFigurePawn
     * konstruktor, který naplní jméno, cesty k ikonám podle typu objektu (tedy pawn)
     * a podle parametru, zda je bílá
     * @param w - bílá
     */
    LogicFigurePawn(bool w);
    ~LogicFigurePawn();

    /**
     * @brief possibleMove
     * podle pravidel vypočítá, kam se může pěšec pohnout
     * tedy pokud je na počáteční pozici tak obě před sebou, pokud jsou volné
     * a případně pokud stojí nepřátelská figurka na diagonále
     * @param board - stav šachovnice
     * @param cor - počáteční pozice figurky
     * @return - list možných pohybů
     */
    std::list<LogicCoordinates> possibleMove(LogicFigure * board[8][8], LogicCoordinates cor);
};

#endif // LOGIC_FIGURE_PAWN_H
