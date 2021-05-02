#include "Player.hpp"

namespace pandemic
{
        Player::Player(Board b , City c){r = "player";}
        Player::~Player(){}
        Player& Player::take_card(City c){return *this;}
        Player& Player::drive(City c){return *this;}
        Player& Player::fly_direct(City c){return *this;}
        Player& Player::fly_charter(City c){return *this;}
        Player& Player::fly_shuttle(City c){return *this;}
        void Player::build(){}
        void Player::discover_cure(Color cl){}
        Player& Player::treat(City c){return *this;}
        std::string Player::role(){return r;}
   
}
