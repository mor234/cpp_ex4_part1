#include "Board.hpp"
namespace pandemic{
    bool Board::is_clean(){
        return true;
    }

    void Board::remove_cures(){

    }
    const int& Board::operator[](City city) const{
        return *(new int(5));
    }
    int& Board::operator[](City city){
        return *(new int(5));
    }
    //----------------------------------
    // friend global IO operators
    //----------------------------------
    std::ostream& operator<< (std::ostream& output, const Board& board)
    {
        return (output<<"hello");
    }

}