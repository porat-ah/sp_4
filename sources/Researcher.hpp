#include "Player.hpp"

#pragma once

namespace pandemic
{
    class Researcher : public Player
    {
    private:
        /* data */
    public:
        Researcher(Board& b , City c);
        void discover_cure(Color cl) override;
    }; 
} 
