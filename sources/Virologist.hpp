#include "Player.hpp"

#pragma once

namespace pandemic
{
    class Virologist : public Player
    {
    private:
        /* data */
    public:
        Virologist(Board& b , City c);
        Virologist();
        Virologist& treat(City c) override;
    };
} 