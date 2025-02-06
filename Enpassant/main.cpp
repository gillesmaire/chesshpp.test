    #include <iostream>
    #include "../chess.hpp"
    
    using namespace std;
    using namespace chess;
    
    int main()
    {
        // initialize the board to START POS
        Board b("r2qkbnr/pbpppppp/1pn5/4P1P1/8/8/PPPP1P1P/RNBQKBNR b KQkq - 0 1");
        Move move = uci::uciToMove(b,"f7f5");
        b.makeMove(move);
        move=Move::make<Move::ENPASSANT>(Square::underlying::SQ_E5,Square::underlying::SQ_F6);
        b.makeMove(move);
        cout<<b<<endl;

        
    }
