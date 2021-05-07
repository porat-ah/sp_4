#include "OperationsExpert.hpp"

namespace pandemic{
    OperationsExpert::OperationsExpert(Board& b , City c):Player(b,c,"OperationsExpert"){}
    OperationsExpert& OperationsExpert::build()
    {
        if(cards.find(loc) == cards.end()){
            cards.insert(loc);
            Player::build();
            cards.erase(loc);
            return *this;
        }

        Player::build();
        cards.insert(loc);
        return *this;
        
    }
}