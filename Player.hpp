#include "City.hpp"
#include "Board.hpp"
#include "Color.hpp"
#include <string>

#pragma once

namespace pandemic
{
    class Player
    {
    private:
        std::string r;
    public:
        Player(Board b , City c);
        ~Player();
        Player& take_card(City c);
        Player& drive(City c);
        Player& fly_direct(City c);
        Player& fly_charter(City c);
        Player& fly_shuttle(City c);
        void build();
        void discover_cure(Color cl);
        Player& treat(City c);
        std::string role();
    };  
}
