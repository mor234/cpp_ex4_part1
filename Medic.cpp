//1. פראמדיק - `Medic`: כשהוא מבצע פעולת "טיפול במחלה", הוא מוריד את כל קוביות-המחלה מהעיר שהוא נמצא בה, ולא רק אחת.
//   * אם כבר התגלתה תרופה למחלה, הוא אוטומטית מוריד את כל קוביות-המחלה מכל עיר שהוא נמצא בה, גם בלי לבצע פעולת "טיפול במחלה".
#include "Medic.hpp"
#include "Player.hpp"
#include <string>
using namespace std;

namespace pandemic{
   
    string Medic::role(){
        return "Medic";
    }
}