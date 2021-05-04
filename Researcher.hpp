//1. חוקרת - `Researcher`: יכולה לבצע פעולת "גילוי תרופה" בכל עיר - לא חייבת להיות בתחנת מחקר.
#pragma once
#include "Player.hpp"
#include "Board.hpp"
#include "City.hpp"

namespace pandemic{
    class Researcher:public Player
    {
        public:
            Researcher (const Board & board, const City & city){}
            virtual std::string role(); 
    };
}