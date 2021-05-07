#include "City.hpp"
#include "Board.hpp"
#include "Color.hpp"
#include <string>

#pragma once

namespace pandemic
{
    const int MIN_CARDS_NUM = 5;
    class Player
    {
    protected:
        std::string _role;
        Board& board;
        City loc;
        std::unordered_set<City> cards;
        size_t get_color();
        void drop_card(City c);
        void _discover_cure(Color cl,int num,bool same_color = true);
        void destroy();
        virtual void change_loc(City c);
    public:
        Player(Board& b , City c , std::string r);
        ~Player();
        Player& take_card(City c);
        virtual Player& drive(City c);
        virtual Player& fly_direct(City c);
        Player& fly_charter(City c);
        Player& fly_shuttle(City c);
        virtual Player& build();
        virtual Player& discover_cure(Color cl);
        virtual Player& treat(City c);
        std::string role();
        void remove_cards();
    };  
}
