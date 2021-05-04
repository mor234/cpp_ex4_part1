//1. קצין תעבורה - `Dispatcher`: כשהוא נמצא בתחנת-מחקר, הוא יכול לבצע פעולת "טיסה ישירה" לכל עיר שהוא רוצה, ללא השלכת קלף-עיר.
#pragma once
#include "Player.hpp"
#include "Board.hpp"
#include "City.hpp"
namespace pandemic{
    class Dispatcher:public Player
    {
        public:
            Dispatcher (const Board & board, const City & city){}
            virtual std::string role(); 
    };



}