#include "City.hpp"
#include "Board.hpp"
#include "Color.hpp"
#include <string>

#pragma once

namespace pandemic
{
    class Player
    {
    protected:
        std::string r;
        Board& board;
        City loc;
        std::unordered_set<City> cards;
        size_t get_color();
    public:
        Player(Board& b , City c);
        ~Player();
        Player& take_card(City c);
        Player& drive(City c);
        Player& fly_direct(City c);
        Player& fly_charter(City c);
        Player& fly_shuttle(City c);
        virtual void build();
        void discover_cure(Color cl);
        Player& treat(City c);
        std::string role();
    };  
}
