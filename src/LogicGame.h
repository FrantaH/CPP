//author: xhoraz02

#ifndef LOGIC_GAME_H
#define LOGIC_GAME_H

#include <list>

#include "logicboard.h"
#include "LogicRound.h"
#include "LogicFigure.h"
#include "LogicCoordinates.h"
#include <QTimer>

using namespace std;
class LogicGame
{
public:
    /// timer pro automatické přehrávání
    QTimer *timer;
    /// objekt třídy board, pro držení stavu
    LogicBoard board;
    /// list všech pohybů
    list<LogicRound *> rounds;
    /// iterátor ukazující na právě zobrazený krok
    list<LogicRound *>::iterator it;
    /// barva právě na řadě
    bool whiteOnTurn = true;

    /**
     * @brief LogicGame
     * konstruktor hry: vytvoření timeru a nastavení iterátoru na začátek tahů
     */
    LogicGame();

    /**
     * @brief nextRound
     * pokud je poslední tah, nedělej nic
     * pokud není hráč na tahu, nedělej nic
     * posunutí iterátoru, zavolání funkce v boardu a nastavení barvy na řadě
     */
    void nextRound();

    /**
     * @brief backRound
     * z listu vezme vyhozenou figurku a vrátí jí na místo kde stála
     */
    void backRound();

    /**
     * @brief updateRounds
     * parsování textového inputu
     * podporuje pouze dlouhou notaci
     * @param input - string vstupní notace
     */
    void updateRounds(string input);


};

#endif // LOGIC_GAME_H
