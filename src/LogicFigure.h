//author: xhoraz02

#ifndef LOGIC_FIGURE_H
#define LOGIC_FIGURE_H

#include <string>
#include <list>
#include "LogicCoordinates.h"
#include <QDebug>

/**
 * @brief The LogicFigure class
 * rodičovská třída pro všechny figurky
 */
class LogicFigure
{
public:
    /// barva figurky
    bool white;
    /// jméno druhu figurky
    std::string name;
    /// cesta k ikoně bílé figurky
    std::string iconw;
    /// cesta k ikoně čené figurky
    std::string iconb;
    ///konstruktor - naplnění atributů
    LogicFigure();
    virtual ~LogicFigure();
    /**
     * @brief possibleMove
     * Metoda na základě stavu a polohy figurky vypočítá list všech možných pohybů
     * @param board - stav hry
     * @param cor - výchozí pozice figurky
     * @return list - všechny možné cílové pozice
     */
    virtual std::list<LogicCoordinates> possibleMove(LogicFigure * board[8][8],LogicCoordinates cor);
};

#endif // LOGIC_FIGURE_H
