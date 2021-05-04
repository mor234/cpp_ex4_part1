//1. פראמדיק - `Medic`: כשהוא מבצע פעולת "טיפול במחלה", הוא מוריד את כל קוביות-המחלה מהעיר שהוא נמצא בה, ולא רק אחת.
//   * אם כבר התגלתה תרופה למחלה, הוא אוטומטית מוריד את כל קוביות-המחלה מכל עיר שהוא נמצא בה, גם בלי לבצע פעולת "טיפול במחלה".
#pragma once
#include "Player.hpp"
#include "Board.hpp"
#include "City.hpp"
namespace pandemic{
    class Medic:public Player
    {
        public:
            Medic (const Board & board, const City & city){}
            virtual std::string role(); 
    };
}