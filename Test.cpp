#include "doctest.h"
#include "headers.hpp"

using namespace pandemic;

TEST_CASE("board functions"){
    Board board;
    CHECK(board.is_clean());
        for (size_t i = 1; i < 6; i++)
        {
            for (City c = City::Algiers; c != City::Washington ; c = City(c+1))
        {
            board[c] = i;
            CHECK(!board.is_clean());
            board[c] = 0;
        }
        for (City c = City::Algiers; c != City::Washington ; c = City(c+1))
        {
            board[c] = i;
            CHECK(!board.is_clean());
        }
        for (City c = City::Algiers; c != City::Washington ; c =  City(c+1))
        {
            board[c] = 0;
        }
        CHECK(board.is_clean());
    }
}


TEST_CASE("Player functions"){
    Board board;
    Player p (board , City::Chicago);
    CHECK_THROWS(p.drive(City::Miami));
    CHECK_THROWS(p.fly_direct(City::Miami));
    CHECK_THROWS(p.fly_charter(City::Miami));
    CHECK_THROWS(p.fly_shuttle(City::Miami));
    CHECK_THROWS(p.treat(City::Miami));
    CHECK_THROWS(p.build());
    CHECK_THROWS(p.discover_cure(Color :: Yellow));
    CHECK_THROWS(p.discover_cure(Color :: Blue));
}

// TEST_CASE("roles unique functions"){
//     Board board;
//     OperationsExpert oe {board, City::Atlanta}; 
//     CHECK_NOTHROW(oe.build());
//     Dispatcher d(board, City::Atlanta);
//     CHECK_NOTHROW(d.fly_direct(City::Washington));
//     FieldDoctor fd(board, City::Washington);
//     Virologist v(board, City::Washington);
//     Medic m(board, City::Washington);
    
//     GeneSplicer gs(board, City::Washington);
//     Researcher r(board, City::Washington);
//     Scientist s(board, City::Washington, 4);
// }
    
    