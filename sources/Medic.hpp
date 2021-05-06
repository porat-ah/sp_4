#include "Player.hpp"

#pragma once

namespace pandemic
{
    class Medic : public Player
    {
    private:
        void change_loc(City c) override;
    public:
        Medic(Board& b , City c);

        Medic& treat(City c) override;
    };
} 