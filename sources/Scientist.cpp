#include "Scientist.hpp"

namespace pandemic{
    Scientist::Scientist(Board& b , City c,int i):Player(b,c,"Scientist"),num(i){}

    void Scientist::discover_cure(Color cl)
        {
			_discover_cure(cl,num);
        }
}