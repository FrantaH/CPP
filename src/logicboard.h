//author: xhoraz02

#ifndef LOGICBOARD_H
#define LOGICBOARD_H
#include <list>
#include "LogicFigure.h"
#include "LogicCoordinates.h"
#include "LogicFigureBishop.h"
#include "LogicFigureKing.h"
#include "LogicFigureKnight.h"
#include "LogicFigurePawn.h"
#include "LogicFigureQueen.h"
#include "LogicFigureRook.h"

/**
 * @brief The LogicBoard class
 * Třída uchovávající stav celé hrací plochy
 */
class LogicBoard
{
public:
    /**
     * @brief board
     * hrací pole 8x8 jako pole polí
     */
    LogicFigure * board[8][8];
    /**
     * @brief allFigures
     * list všech figur pro případné rušení objektů
     */
    std::list<LogicFigure *> allFigures;

    /**
     * @brief LogicBoard()
     * Konstruktor: naplní hrací desku figurkami v počáteční poloze
     * + vyplní prázdné pole nullptr
     */
    LogicBoard();
    ~LogicBoard();

    /**
     * @brief nextRound
     * zjistí, zda-li se může pohnout na end, pokud ano, upraví board a vrátí vyhozenou figurku
     * @param start - souřadnice výchozí pozice figurky
     * @param end - souřadnice cílové pozice figurky
     * @return - reference na figurku, která byla vyhozena (při nevyhození nullptr)
     */
    LogicFigure * nextRound(LogicCoordinates * start,LogicCoordinates * end);

private:
    /**
     * @brief addFigureToBoard
     * Přidání figurky na určité místo v board
     * @param fig - objekt, který se má přidat
     * @param x - souřadnice x v board (odpovídá písmenku)
     * @param y - souřadnice y v board
     */
    void addFigureToBoard(LogicFigure * fig,int x, int y);
};

#endif // LOGICBOARD_H
