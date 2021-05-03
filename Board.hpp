#pragma once
#include "City.hpp"
#include <iostream>
#include <array>

namespace pandemic
{
    class Board{
        private:
            std::array<int,48> cities;
        public:
            int& operator[](City c);
            friend std::ostream& operator<<(std::ostream& os , Board b);
            bool is_clean();
            void remove_cures();
    };
    
} 
