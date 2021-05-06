#include "Player.hpp"

#pragma once

namespace pandemic
{
    class OperationsExpert : public Player
    {
    private:
        /* data */
    public:
        OperationsExpert(Board& b , City c);
        void build() override;
    };
} 