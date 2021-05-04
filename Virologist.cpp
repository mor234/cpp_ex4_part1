//1. וירולוגית - `Virologist`: יכולה לבצע פעולת "טיפול במחלה", לא רק בעיר  שהיא נמצאת בה, אלא בכל עיר בעולם - ע"י השלכת קלף של אותה העיר.

#include "Virologist.hpp"
#include "Player.hpp"
#include <string>
using namespace std;

namespace pandemic{
   
    string Virologist::role(){
        return "Virologist";
    }
}