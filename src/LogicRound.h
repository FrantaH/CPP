//author: xhoraz02

#ifndef LOGIC_ROUND_H
#define LOGIC_ROUND_H

#include "LogicCoordinates.h"
#include "LogicFigure.h"

class LogicRound
{
public:
    /// počáteční souřadnice
    LogicCoordinates * start;
    /// cílové souřadnice
    LogicCoordinates * end;
    /// vyhozená figurka
    LogicFigure * kicked;

    /**
     * @brief LogicRound
     * konstruktor kola, zatím pouze souřadnice, až při vykonání se přiřadí vyhozená figurka
     * @param st - souřadnice výchozí pozice
     * @param en - souřadnice cílové pozice
     */
    LogicRound(LogicCoordinates * st, LogicCoordinates * en);
    ~LogicRound();

};

#endif // LOGIC_ROUND_H
