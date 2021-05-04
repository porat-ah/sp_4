#include "Player.hpp"

#pragma once

namespace pandemic
{
    class Dispatcher : public Player
    {
    private:
        /* data */
    public:
        Dispatcher(Board& b , City c);
    };
} 