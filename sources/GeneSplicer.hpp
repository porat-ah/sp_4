#include "Player.hpp"

#pragma once

namespace pandemic
{
    class GeneSplicer : public Player
    {
    private:
        void _discover_cure(Color cl,int num) override;
    public:
        GeneSplicer(Board& b , City c);

    };  
} 
