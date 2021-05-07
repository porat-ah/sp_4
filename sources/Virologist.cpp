#include "Virologist.hpp"

namespace pandemic{
    Virologist::Virologist(Board& b , City c):Player(b,c,"Virologist"){}

    Virologist& Virologist::treat(City c){
        if (loc == c)
        {
            Player::treat(c);
            return *this;
        }
        City temp = loc;
        drop_card(c);
        change_loc(c);
        Player::treat(c);
        change_loc(temp);
        return *this;
    }

}