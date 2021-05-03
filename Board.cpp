#include "Board.hpp"

namespace pandemic
{
    int& Board::operator[](City c){
        return cities.at(c);
    }
    bool Board::is_clean(){
        cities.at(City::Chicago) = 0;
        return cities.at(City::Chicago) != 0;
    }
    void Board::remove_cures(){}

    std::ostream& operator<<(std::ostream& os , Board b){
        return (os << "");
    }
} 
