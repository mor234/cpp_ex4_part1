//1. קצין תעבורה - `Dispatcher`: כשהוא נמצא בתחנת-מחקר, הוא יכול לבצע פעולת "טיסה ישירה" לכל עיר שהוא רוצה, ללא השלכת קלף-עיר.
#include "Dispatcher.hpp"
#include "Player.hpp"
#include <string>
using namespace std;

namespace pandemic{
   
    string Dispatcher::role(){
        return "Dispatcher";
    }
}