#include "Board.hpp"

namespace pandemic
{
    Board::Board():cubes(),cures(),re_stations(){
        cubes.fill(0);
        cures.fill(false);
        re_stations.fill(false);
    }
    
    const int& Board::operator[](City c)const{
        return cubes.at(c);
    }
    
    int& Board::operator[](City c){
        return cubes.at(c);
    }
    
    bool Board::is_clean(){
        bool b = true;
        for (size_t i = 0; i < CITIES_NUM && b; i++)
        {
            b &= (cubes.at(i) == 0);
        }
        return b;
    }

    bool Board::has_station(City c){
        return re_stations.at(c);
    }

    void Board::remove_cures(){
        cures.fill(false);
    }

    void Board::remove_stations(){
        re_stations.fill(false);
    }

    bool Board::cured(Color cl){
        return cures.at(cl);
    }

    std::ostream& operator<<(std::ostream& os , Board b){
        return (os << "");
    }

    // setting the data 
    static const std::array<std::unordered_set<City>,CITIES_NUM> cities_data= {
std::unordered_set<City>{City::Madrid ,City::Paris ,City::Istanbul ,City::Cairo},//Algiers
std::unordered_set<City>{City::Chicago ,City::Miami ,City::Washington},//Atlanta 
std::unordered_set<City>{City::Tehran ,City::Istanbul ,City::Cairo ,City::Riyadh ,City::Karachi},//Baghdad 
std::unordered_set<City>{City::Kolkata ,City::Chennai ,City::Jakarta ,City::HoChiMinhCity ,City::HongKong},//Bankok 
std::unordered_set<City>{City::Shanghai ,City::Seoul},//Beijing 
std::unordered_set<City>{City::MexicoCity ,City::Lima ,City::Miami ,City::SaoPaulo ,City::BuenosAires},//Bogota 
std::unordered_set<City>{City::Bogota ,City::SaoPaulo},//BuenosAires 
std::unordered_set<City>{City::Algiers ,City::Istanbul ,City::Baghdad ,City::Khartoum ,City::Riyadh},//Cairo 
std::unordered_set<City>{City::Mumbai ,City::Delhi ,City::Kolkata ,City::Bangkok ,City::Jakarta},//Chennai 
std::unordered_set<City>{City::SanFrancisco ,City::LosAngeles ,City::MexicoCity ,City::Atlanta ,City::Montreal},//Chicago 
std::unordered_set<City>{City::Tehran ,City::Karachi ,City::Mumbai ,City::Chennai ,City::Kolkata},//Delhi 
std::unordered_set<City>{City::London ,City::Paris ,City::Milan ,City::StPetersburg},//Essen 
std::unordered_set<City>{City::Jakarta ,City::Bangkok ,City::HongKong ,City::Manila},//HoChiMinhCity 
std::unordered_set<City>{City::Bangkok ,City::Kolkata ,City::HoChiMinhCity ,City::Shanghai ,City::Manila ,City::Taipei},//HongKong 
std::unordered_set<City>{City::Milan ,City::Algiers ,City::StPetersburg ,City::Cairo ,City::Baghdad ,City::Moscow},//Istanbul 
std::unordered_set<City>{City::Chennai ,City::Bangkok ,City::HoChiMinhCity ,City::Sydney},//Jakarta 
std::unordered_set<City>{City::Kinshasa ,City::Khartoum},//Johannesburg 
std::unordered_set<City>{City::Tehran ,City::Baghdad ,City::Riyadh ,City::Mumbai ,City::Delhi},//Karachi 
std::unordered_set<City>{City::Cairo ,City::Lagos ,City::Kinshasa ,City::Johannesburg},//Khartoum 
std::unordered_set<City>{City::Lagos ,City::Khartoum ,City::Johannesburg},//Kinshasa 
std::unordered_set<City>{City::Delhi ,City::Chennai ,City::Bangkok ,City::HongKong},//Kolkata 
std::unordered_set<City>{City::SaoPaulo ,City::Khartoum ,City::Kinshasa},//lagos
std::unordered_set<City>{City::MexicoCity ,City::Bogota ,City::Santiago},//Lima
std::unordered_set<City>{City::NewYork ,City::Madrid ,City::Essen ,City::Paris},//London
std::unordered_set<City>{City::SanFrancisco ,City::Chicago ,City::MexicoCity ,City::Sydney},//LosAngeles
std::unordered_set<City>{City::London ,City::NewYork ,City::Paris ,City::SaoPaulo ,City::Algiers},//Madrid
std::unordered_set<City>{City::Taipei ,City::SanFrancisco ,City::HoChiMinhCity ,City::Sydney,City::HongKong},//Manila
std::unordered_set<City>{City::LosAngeles ,City::Chicago ,City::Miami ,City::Lima ,City::Bogota},//MexicoCity
std::unordered_set<City>{City::Atlanta ,City::MexicoCity ,City::Washington ,City::Bogota},//Miami
std::unordered_set<City>{City::Essen ,City::Paris ,City::Istanbul},//Milan
std::unordered_set<City>{City::Chicago ,City::Washington ,City::NewYork},//Montreal
std::unordered_set<City>{City::StPetersburg ,City::Istanbul ,City::Tehran},//Moscow
std::unordered_set<City>{City::Karachi ,City::Delhi ,City::Chennai},//Mumbai
std::unordered_set<City>{City::Montreal ,City::Washington ,City::London ,City::Madrid},//NewYork
std::unordered_set<City>{City::Taipei ,City::Tokyo},//Osaka
std::unordered_set<City>{City::Algiers ,City::Essen ,City::Madrid ,City::Milan ,City::London},//Paris
std::unordered_set<City>{City::Baghdad ,City::Cairo ,City::Karachi},//Riyadh
std::unordered_set<City>{City::LosAngeles ,City::Chicago ,City::Tokyo ,City::Manila},//SanFrancisco
std::unordered_set<City>{City::Lima},//Santiago
std::unordered_set<City>{City::Bogota ,City::BuenosAires ,City::Lagos ,City::Madrid},//SaoPaulpo
std::unordered_set<City>{City::Beijing ,City::Shanghai ,City::Tokyo},//Seoul
std::unordered_set<City>{City::Beijing ,City::HongKong ,City::Taipei ,City::Seoul ,City::Tokyo},//Shanghai
std::unordered_set<City>{City::Essen ,City::Istanbul ,City::Moscow},//StPetersburg
std::unordered_set<City>{City::Jakarta ,City::Manila ,City::LosAngeles},//Sydney
std::unordered_set<City>{City::Shanghai ,City::HongKong ,City::Osaka ,City::Manila},//Taipei
std::unordered_set<City>{City::Baghdad ,City::Moscow ,City::Karachi ,City::Delhi},//Tehran
std::unordered_set<City>{City::Seoul ,City::Shanghai ,City::Osaka ,City::SanFrancisco},//Tokyo
std::unordered_set<City>{City::Atlanta ,City::NewYork ,City::Montreal ,City::Miami},//Washington
};

    const std::array<std::unordered_set<City>,CITIES_NUM> Board::cities = cities_data;


    static const std::array<std::unordered_set<City>,COLORS_NUM> colors_data = {
std::unordered_set<City>{City::Bogota,City::BuenosAires,City::Johannesburg,City::Khartoum,City::Kinshasa,
City::Lagos,City::Lima,City::LosAngeles,City::MexicoCity,City::Miami,City::Santiago,City::SaoPaulo},

std::unordered_set<City>{City::Bangkok,City::Beijing,City:: HoChiMinhCity,City::HongKong,City::Jakarta,
City::Manila,City::Osaka,City::Seoul,City::Shanghai,City::Sydney,City::Taipei,City::Tokyo},

std::unordered_set<City>{City::Atlanta,City::Chicago,City::Essen,City::London,City::Madrid,
City::Milan,City::Montreal,City::NewYork,City::Paris,City::SanFrancisco,City::StPetersburg,City::Washington},

std::unordered_set<City>{City::Algiers,City::Baghdad,City::Cairo,City::Chennai,City::Delhi
,City::Istanbul,City::Karachi,City::Kolkata,City::Moscow,City::Mumbai,City::Riyadh,City::Tehran}
    };

    const std::array<std::unordered_set<City>,COLORS_NUM> Board::colors = colors_data;

} 
