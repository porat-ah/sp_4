#include "Player.hpp"
#include <stdexcept>

namespace pandemic
{
        Player::Player(Board& b , City c):board(b){
                r = "player";
                loc = c;
        }
        
        Player::~Player(){}
		

        Player& Player::take_card(City c){
                cards.insert(c);
                return *this;
        }


        Player& Player::drive(City c)
        {
                if(Board::cities.at(loc).find(c) == Board::cities.at(loc).end()){
                        throw std::invalid_argument("cities not connected");
                }
                loc = c;
                std::cout << "drive" << std::endl;
                return *this;
        }


        Player& Player::fly_direct(City c)
        {
            drop_card(c);
            loc = c;
            std::cout << "fly_direct" << std::endl;
            return *this;
        }


        Player& Player::fly_charter(City c)
        {
            drop_card(loc);
			loc = c;
			std::cout << "fly charter" << std::endl;
			return *this; 
        }


        Player& Player::fly_shuttle(City c)
        {
			if(board.re_stations.at(loc) && board.re_stations.at(c)){
				loc = c; 
				std::cout << "shuttle" << std::endl;
				return *this;   
			}
			throw std::invalid_argument("one of them dont have a station!");
        }


        void Player::build()
        {
			if(board.re_stations.at(loc)) {
                std::cout << "build" << std::endl;
				return;
			} 
			drop_card(loc);
			board.re_stations.at(loc) = true;
        }


        void Player::discover_cure(Color cl)
        {
			if (board.cures.at(cl))
			{
                std::cout << "cure" << std::endl;
				return;
			}
			if (!board.re_stations.at(loc))
			{
				throw std::invalid_argument("this city dont have a station!");
			}
			int count = 0;
			std::unordered_set<City> cards_found;
			for(auto city: Board::colors.at(cl))
			{
				if (cards.find(city) != cards.end())
				{
					++count;
					cards_found.insert(city);
				}
			}
			if(count >= ){
				board.cures.at(cl) = true;
				for(auto city: cards_found){
					cards.erase(city);
					--count;
					if(!count){
						return;
					}
				}
			}
        }


        size_t Player::get_color()
        {
                for (size_t i = 0; i < COLORS_NUM; i++)
                {
                        if (Board::colors.at(i).find(loc) != Board::colors.at(i).end())
                        {
                                return i;
                        }
                }
                return 0; 
        }


        void Player::drop_card(City c){
            if(cards.find(c) == cards.end()){
				throw std::invalid_argument("you dont have this card");
			}
            cards.erase(c);
        }


        Player& Player::treat(City c)
        {
            if (loc != c)
            {
                throw std::invalid_argument("you are not in this city!");
            }
            
            if (!board.cubes.at(c))
            {
                throw std::invalid_argument("this city isnt infected!");
            }
            std::cout << "treat" << std::endl;
            if (board.cures.at(get_color()))
            {
                board.cubes.at(c) = 0;
                return *this;
            }
            --board.cubes.at(c);                
            return *this;
        }
        
		std::string Player::role(){return r;}
   
}
