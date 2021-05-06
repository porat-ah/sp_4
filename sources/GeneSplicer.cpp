#include "GeneSplicer.hpp"

namespace pandemic{
    GeneSplicer::GeneSplicer(Board& b , City c):Player(b,c,"GeneSplicer"){}

    void GeneSplicer::_discover_cure(Color cl,int num){
        if (board.cured(cl))
			{
                std::cout << "cure" << std::endl;
				return;
			}
			if (!board.has_station(loc))
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
			if(count >= num){
				//board.cures.at(cl) = true;
				for(auto city: cards_found){
					cards.erase(city);
					--count;
					if(count == 0){
						return;
					}
				}
			}
    }
}