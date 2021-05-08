#include "Dispatcher.hpp"

namespace pandemic{
    Dispatcher::Dispatcher(Board& b , City c):Player(b,c,"Dispatcher"){}

    Dispatcher& Dispatcher::fly_direct(City c){
        check_loc(c);
        if (board.has_station(loc))
        {
            loc = c;
            return *this;
        }
        Player::fly_direct(c);
        return *this;
    }
}