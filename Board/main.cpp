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
    show("Board Board b1");
    Board b1;
    cout<< b1<< endl;

    show("Board b2(\"4k2r/6r1/8/8/8/8/3R4/R3K3 w Qk - 0 1\")");
    Board b2("4k2r/6r1/8/8/8/8/3R4/R3K3 w Qk - 0 1");
    cout << b2<<endl;

    show("Board b3=Board::fromFen(\"4k2r/6r1/8/8/8/8/3R4/R3K3 w Qk - 0 1\")");
    Board  b3= Board::fromFen("4k2r/6r1/8/8/8/8/3R4/R3K3 w Qk - 0 1");
    cout<< b3<< endl;
    
    show("b3.getFen(true)");
    cout << b3.getFen(true);
    cout<<endl;cout<<endl;
    
    show("b3.getFen(false))");
    cout << b3.getFen(false);
    cout<<endl;cout<<endl;
    

    show("b3.Board:setFEN(constants::STARTPOS)");
    b3.setFen(constants::STARTPOS);
    cout<< b3<< endl;

    show("Board b3=Board::fromEpd(\"rnbqkbnr/pppppppp/8/8/8/8/PPPPPPPP/RNBQKBNR w KQkq - 0 1 50 1 e2e4\")");
    Board b4= Board::fromEpd("rnbqkbnr/pppppppp/8/8/8/8/PPPPPPPP/RNBQKBNR w KQkq - 0 1 50 1 e2e4");
    cout <<b4<<endl;
    
    show("b2.Board:setEpd(\"rnbqkbnr/pppppppp/8/8/8/8/PPPPPPPP/RNBQKBNR w KQkq - 0 1 50 1 e2e4\")");
    b2.setEpd("rnbqkbnr/pppppppp/8/8/8/8/PPPPPPPP/RNBQKBNR w KQkq - 0 1 50 1 e2e4");
    cout <<b2<<endl;


}

