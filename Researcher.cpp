//1. חוקרת - `Researcher`: יכולה לבצע פעולת "גילוי תרופה" בכל עיר - לא חייבת להיות בתחנת מחקר.
#include "Researcher.hpp"
#include "Player.hpp"
#include <string>
using namespace std;

namespace pandemic{
   
    string Researcher::role(){
        return "Researcher";
    }
}