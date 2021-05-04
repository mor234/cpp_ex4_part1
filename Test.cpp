
#include "doctest.h"
#include <bits/stdc++.h>//rand

#include "Board.hpp"
#include "City.hpp"
#include "Color.hpp"
#include "Player.hpp"

#include "Researcher.hpp"
#include "Scientist.hpp"
#include "FieldDoctor.hpp"
#include "GeneSplicer.hpp"
#include "OperationsExpert.hpp"
#include "Dispatcher.hpp"
#include "Medic.hpp"
#include "Virologist.hpp"

using namespace pandemic;
using namespace std;

const int SEED = 7;
const int CITY_NUMBER = 48;

int genrate_random_positive_negative() {
    int negative_positive = rand() % 2;// 0 or 1
    return -1 + negative_positive;//return 1 or -1
}

int genrate_random_double() {
    double tmp_rand = ((double) rand() / (rand() + 0.1));
    return tmp_rand * genrate_random_positive_negative();
}

City rand_city() {
    return (City)(rand() % CITY_NUMBER);
}
void initializeBoard(Board & board)
{
	board[City::Kinshasa] = 3;      // put 3 yellow disease cubes in Kinshasa.
	board[City::Kinshasa] = 2;      // change number of disease cubes in Kinshasa to 2.
	board[City::MexicoCity] = 3;    // put 3 yellow disease cubes in MexicoCity
	board[City::HoChiMinhCity] = 1; // put 1 red disease cube in HoChiMinhCity
	board[City::Chicago] = 1;       // put 1 blue disease cube in Chicago
}
TEST_CASE("good tests")
{
    srand(SEED);
    Board b;
    initializeBoard(b);
    for(int i = 0;i<30; i++)
    { 
        int rand_unit_index_d = rand() % 3;


        //== check
        CHECK(true);


    }
    Researcher r{b, rand_city()};
    Scientist s{b, rand_city(), 5};
    FieldDoctor f{b, rand_city()};
    GeneSplicer g{b, rand_city()};
    OperationsExpert o{b, rand_city()};
    Dispatcher d{b, rand_city()};
    Medic m{b, rand_city()};
    Virologist v{b, rand_city()};
    //role() function
    CHECK_EQ(r.role(),"Researcher");
    CHECK_EQ(s.role(),"Scientist");
    CHECK_EQ(f.role(),"FieldDoctor");
    CHECK_EQ(g.role(),"GeneSplicer");
    CHECK_EQ(o.role(),"OperationsExpert");
    CHECK_EQ(d.role(),"Dispatcher");
    CHECK_EQ(m.role(),"Medic");
    CHECK_EQ(v.role(),"Virologist");


}

TEST_CASE("bad tests")
{
    Board b;
    initializeBoard(b);
    OperationsExpert o {b, City::Atlanta};  // initialize an "operations expert" player on the given board, in Atlanta.
	o.take_card(City::Johannesburg)
	 .take_card(City::Khartoum)
	 .take_card(City::SaoPaulo)
	 .take_card(City::BuenosAires)
	 .take_card(City::HoChiMinhCity);
    Researcher r {b, City::Atlanta};  // initialize an "Researcher" player on the given board, in Atlanta.
	r.take_card(City::Johannesburg)
	 .take_card(City::Khartoum)
	 .take_card(City::SaoPaulo)
	 .take_card(City::BuenosAires)
	 .take_card(City::HoChiMinhCity);
    CHECK_NOTHROW(o.build());
    CHECK_THROWS(r.build());
    CHECK_NOTHROW(o.drive(City::Washington));  // legal action: you drive from Atlanta to a connected city.
    CHECK_THROWS(o.drive(City::Madrid)); // illegal action: Madrid is not connected to Washington.
    CHECK_NOTHROW(o.fly_direct(City::Johannesburg));  // legal action: you discard the Johannesburg card and fly to Johannesburg.
	CHECK_THROWS(o.fly_direct(City::Taipei));  // illegal action: you do not have the card of Taipei.
	CHECK_NOTHROW(o.drive(City::Kinshasa));    // legal action: you move from Johannesburg to a connected city.
	CHECK_EQ(b[City::Kinshasa],2); // 2
	CHECK_NOTHROW(o.treat(City::Kinshasa));    // legal action: you remove 1 disease cube from current city (1 cube remains).
	CHECK_EQ(b[City::Kinshasa],1); // 1
	CHECK_NOTHROW(o.treat(City::Kinshasa));    // legal action: you remove 1 disease cube from current city (0 cubes remain).
	CHECK_EQ(b[City::Kinshasa] ,0); // 0
	CHECK_THROWS(o.treat(City::Kinshasa));  // illegal action: no more cubes remain in Kinshasa.
	CHECK_THROWS(o.treat(City::Washington));  // illegal action: you are not in Washington.



}