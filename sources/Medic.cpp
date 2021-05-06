#include "Medic.hpp"

namespace pandemic{
    Medic::Medic(Board& b , City c):Player(b,c,"Medic"){}
    
    void Medic::change_loc(City c){
        loc = c;
        if (board.cured((Color)get_color()))
        {
            board[c] = 0;
        }
    }

    Medic& Medic::treat(City c){
        Player::treat(c);
        board[c] = 0;
        return *this;
    }
}