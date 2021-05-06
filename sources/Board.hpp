#pragma once
#include "City.hpp"
#include "Color.hpp"
#include <iostream>
#include <array>
#include <unordered_set>



namespace pandemic
{
    constexpr int COLORS_NUM = 4;
    constexpr int CITIES_NUM = 48;
    class Board{
        private:
            std::array<bool,COLORS_NUM> cures;
            std::array<int,CITIES_NUM> cubes;
            std::array<bool,CITIES_NUM> re_stations;
            friend class Player;
        public:
            Board();
            static const std::array<std::unordered_set<City>,CITIES_NUM> cities ;
            static const std::array<std::unordered_set<City>,COLORS_NUM> colors ;
            int& operator[](City c);
            const int& operator[](City c) const;
            friend std::ostream& operator<<(std::ostream& os , Board b);
            bool is_clean();
            void remove_cures();
            void remove_stations();
            bool has_station(City c);
            bool cured(Color c);
    };
    
} 
