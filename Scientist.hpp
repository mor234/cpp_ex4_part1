//1. מדענית - `Scientist`: יכולה לבצע פעולת "גילוי תרופה" בעזרת `n` קלפים בלבד (במקום 5), כאשר הפרמטר `n` מועבר בבנאי (במשחק המקורי `n=4`).
#pragma once
#include "Player.hpp"
#include "Board.hpp"
#include "City.hpp"
namespace pandemic{
    class Scientist:public Player
    {
        public:
            Scientist(const Board & board, const City & city, const int & num){}        
            virtual std::string role(); 
    };
}