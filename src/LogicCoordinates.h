//author: xhoraz02

#ifndef LOGIC_COORDINATES_H
#define LOGIC_COORDINATES_H

/**
 * @brief The LogicCoordinates class
 * Objekt obsahující souřadnice
 */
class LogicCoordinates
{
public:
    int x;
    int y;
    LogicCoordinates(int cx,int cy);

    /**
     * @brief operator ==
     * redefinice operátoru ekvivalence
     * @param lhs - druhý testovaný objekt
     * @return bool - ekvivalentní
     */
    inline bool operator==(const LogicCoordinates& lhs)
    {
        return (lhs.x==this->x && lhs.y==this->y);
    }

    /**
     * @brief operator !=
     * @param lhs - druhý testovaný objekt
     * @return bool - neekvivalentní
     */
    inline bool operator!=(LogicCoordinates& lhs)
    {
        return !(lhs == *this);
    }
};

#endif // LOGIC_COORDINATES_H
