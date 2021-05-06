#include "Player.hpp"

#pragma once

namespace pandemic
{
    class FieldDoctor : public Player
    {
    private:
        /* data */
    public:
        FieldDoctor(Board& b , City c);

        FieldDoctor& treat(City c) override;
    };
} 