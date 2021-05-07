#include "GeneSplicer.hpp"

namespace pandemic{
    GeneSplicer::GeneSplicer(Board& b , City c):Player(b,c,"GeneSplicer"){}

	GeneSplicer& GeneSplicer::discover_cure(Color cl){
		_discover_cure(cl,MIN_CARDS_NUM,false);
		return *this;
	}
    
}