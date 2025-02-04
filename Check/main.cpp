#include "../chess.hpp"
    
    using namespace std;
    using namespace chess;
    
int main(int argc, char *argv[])
{
    Board b(constants::STARTPOS);
    Movelist moves;
    movegen::legalmoves(moves,b);
    for ( auto move: moves)
        cout<<move<<endl;
    Move m;
    m=uci::uciToMove(b,"e2e4");b.makeMove(m);
    m=uci::uciToMove(b,"d7d5");b.makeMove(m);
    m=uci::uciToMove(b,"e4d5");b.makeMove(m);
    m=uci::uciToMove(b,"c7c6");b.makeMove(m);
    m=uci::uciToMove(b,"d5c6");b.makeMove(m);
    m=uci::uciToMove(b,"c8f5");b.makeMove(m);
    m=uci::uciToMove(b,"c6b7");b.makeMove(m);
    m=uci::uciToMove(b,"b8c6");b.makeMove(m);
    m=uci::uciToMove(b,"a2a3");b.makeMove(m);
    m=uci::uciToMove(b,"d8d7");b.makeMove(m);
    m=Move::make<Move::PROMOTION>(Square::underlying::SQ_B7,
                                  Square::underlying::SQ_A8 ,PieceType::QUEEN);
    b.makeMove(m);
    cout<<b<<endl;

    movegen::legalmoves(moves,b);
    for ( auto move: moves)
        cout<<move<<endl;
    moves.clear();

    movegen::legalmoves<movegen::MoveGenType::CAPTURE> (moves,b);
    for ( auto move: moves)
        cout<<move<<endl;


}
