#include "Board.hpp"

namespace pandemic
{
    int& Board::operator[](City c){
        return cities.at(c);
    }
    bool Board::is_clean(){
        return false;
    }

    std::ostream& operator<<(std::ostream& os , Board b){
        return (os << "");
    }
} 
