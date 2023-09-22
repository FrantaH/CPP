//author: xhoraz02

#include "LogicRound.h"

LogicRound::LogicRound(LogicCoordinates * st, LogicCoordinates * en)
{
    this->start= st;
    this->end = en;
}

LogicRound::~LogicRound()
{
    delete start;
    delete end;
}
