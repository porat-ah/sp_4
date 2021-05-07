#include "Player.hpp"

#pragma once

namespace pandemic
{
    class GeneSplicer : public Player
    {
    private:
    public:
        GeneSplicer(Board& b , City c);
        GeneSplicer& discover_cure(Color cl)override;

    };  
} 
