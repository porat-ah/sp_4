#include "FieldDoctor.hpp"

namespace pandemic{
    FieldDoctor::FieldDoctor(Board& b , City c):Player(b,c,"FieldDoctor"){}

    FieldDoctor& FieldDoctor::treat(City c){
        if (loc == c)
        {
            Player::treat(c);
            return *this;
        }
        City temp = loc;
        if (Board::cities.at(loc).find(c) ==
                Board::cities.at(loc).end() )
        {
            return *this;
        }
        change_loc(c);
        Player::treat(c);
        change_loc(temp);
        return *this;
    }
}