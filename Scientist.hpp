#include "Player.hpp"

#pragma once

namespace pandemic
{
    class Scientist : public Player
    {
    private:
        int num;
    public:
        Scientist(Board b , City c,int i);
    }; 
}
