    #include <iostream>
    #include "../chess.hpp"
    
    using namespace std;
    using namespace chess;
    
    int main()
    {
        // initialize the board to START POS
        Board b("r1bqkbnr/pppp1ppp/2n5/4p3/2B1P3/5N2/PPPP1PPP/RNBQK2R w KQkq - 0 1");
        cout<<b<<endl;

        Move move;
        move= Move::make<Move::CASTLING>(Square::underlying::SQ_E1,Square::underlying::SQ_H1);
        b.makeMove(move);
        cout<<b<<endl;
        
    }
