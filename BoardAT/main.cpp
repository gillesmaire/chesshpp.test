#include "../chess.hpp"
#include <iostream>

using namespace chess;
using namespace std;

void show( std::string_view line)
{
    cout<< line <<endl;
    for (int i=0;i<line.length();i++)
      cout<<"-";
    cout<<endl;

}


int main(int argc, char *argv[])
{
    show("Board Board b");
    Board b;
    cout<< b<< endl;
    show("Piece at D1");
    cout<< b.at(3)<<endl;
    show("Piece at E1");
    cout<< std::string(b.at(Square::underlying::SQ_E1))<<endl;
    show("Piece at A8");
    cout<< std::string(b.at<Piece>(Square::underlying::SQ_A8))<<endl;
    show("Piece type at E1");
    cout<< std::string(b.at<PieceType>(Square::underlying::SQ_E1))<<endl;
}
