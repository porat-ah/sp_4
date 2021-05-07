#include "Researcher.hpp"

namespace pandemic{
    Researcher::Researcher(Board& b , City c):Player(b,c,"Researcher"){}

    Researcher& Researcher::discover_cure(Color cl){
        if (board.has_station(loc))
        {
            Player::discover_cure(cl);
            return *this;
        }
        if (cards.find(loc) != cards.end())
        {
            Player::build();
            cards.insert(loc);
            Player::discover_cure(cl);
            Player::destroy();
            return *this;
        }
        cards.insert(loc);
        Player::build();
        Player::discover_cure(cl);
        Player::destroy();
        return *this;
    }

}