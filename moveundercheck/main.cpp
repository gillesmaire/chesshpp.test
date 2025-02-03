#include "../chess.hpp"
    
    using namespace std;
    using namespace chess;
    
int main(int argc, char *argv[])
{
    Board b(constants::STARTPOS);
    Move m;

    m=uci::uciToMove(b,"e2e4");b.makeMove(m);
    m=uci::uciToMove(b,"f7f5");b.makeMove(m);
    m=uci::uciToMove(b,"d1h5");b.makeMove(m);
    m=uci::uciToMove(b,"h7h6");b.makeMove(m);


    
    cout<<b<<endl;
}
