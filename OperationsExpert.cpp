#include "OperationsExpert.hpp"

namespace pandemic{
    OperationsExpert::OperationsExpert(Board& b , City c):Player(b,c){}
    void OperationsExpert::build()
    {
        if(cards.find(loc) == cards.end()){
            cards.insert(loc);
            Player::build();
            return;
        }

        Player::build();
        cards.insert(loc);
        
    }
}