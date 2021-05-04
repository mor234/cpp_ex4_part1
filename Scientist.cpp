//1. מדענית - `Scientist`: יכולה לבצע פעולת "גילוי תרופה" בעזרת `n` קלפים בלבד (במקום 5)
//, כאשר הפרמטר `n` מועבר בבנאי (במשחק המקורי `n=4`).
#include "Scientist.hpp"
#include "Player.hpp"
#include <string>
using namespace std;

namespace pandemic{
   
    string Scientist::role(){
        return "Scientist";
    }
}