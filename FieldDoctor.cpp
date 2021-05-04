// רופא שטח - `FieldDoctor`: יכול לבצע פעולת "טיפול במחלה" לא רק בעיר שהוא נמצא בה אלא בכל עיר סמוכה לעיר שהוא נמצא
// בה (ע"פ מפת הקשרים), בלי להשליך קלף עיר.
#include "FieldDoctor.hpp"
#include "Player.hpp"
#include <string>
using namespace std;

namespace pandemic{
   
    string FieldDoctor::role(){
        return "FieldDoctor";
    }
}