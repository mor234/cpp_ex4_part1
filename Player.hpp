#pragma once
#include "City.hpp"
#include "Color.hpp"

#include <string>
namespace pandemic{
    class Player{
        public:
            Player & take_card(City city);

            //movements options
            Player & drive(City city);
            Player & fly_direct(City city);
            Player & fly_charter(City city);
            Player & fly_shuttle(City city);

            Player & treat(City city);



            Player & discover_cure(Color color);
            Player & build();
            virtual std::string role()=0;
    };



}