#pragma once
#include "City.hpp"
#include <iostream>

namespace pandemic{
    class Board{
        public:
          
            
            void remove_cures();
            bool is_clean();
            //operator []
            const int & operator[](City city) const;
            int& operator[](City city);
        
            //----------------------------------
            // friend global IO operators
            //----------------------------------
            friend std::ostream& operator<< (std::ostream& output, const Board & board);
    };
}