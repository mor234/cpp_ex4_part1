//1. וירולוגית - `Virologist`: יכולה לבצע פעולת "טיפול במחלה", לא רק בעיר  שהיא נמצאת בה, אלא בכל עיר בעולם - ע"י השלכת קלף של אותה העיר.
#pragma once
#include "Player.hpp"
#include "Board.hpp"
#include "City.hpp"
namespace pandemic{
    class Virologist:public Player
    {
        public:
            Virologist (const Board & board, const City & city){}
            virtual std::string role(); 
    };
}