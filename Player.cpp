#include "Player.hpp"
#include "City.hpp"
#include "Color.hpp"//check if have to
using namespace std;
namespace pandemic{
       Player & Player::take_card(City city)
       {
            return *this;

       }

        //movements options
        Player & Player::drive(City city){
            return *this;

        }
        
        Player & Player::fly_direct(City city){
            return *this;

        }
        Player & Player::fly_charter(City city){
            return *this;

        }
        Player & Player::fly_shuttle(City city){
            return *this;

        }

        Player & Player::treat(City city){
            return *this;

        }



        Player & Player::discover_cure(Color color){
            return *this;            
        }
        Player & Player::build(){
            return *this;
        }

}