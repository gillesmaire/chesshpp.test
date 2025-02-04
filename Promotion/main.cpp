#include "../chess.hpp"
#include <iostream>


using namespace chess;
using namespace std;

int main(int argc, char *argv[])
{
    Board b(constants::STARTPOS);
    
    Movelist list;
    Move m;
    
    cout<<b<<endl;    
    
    m=uci::uciToMove(b,"e2e4");b.makeMove(m);list.add(m);
    m=uci::uciToMove(b,"d7d5");b.makeMove(m);list.add(m);
    m=uci::uciToMove(b,"e4d5");b.makeMove(m);list.add(m);
    m=uci::uciToMove(b,"c7c6");b.makeMove(m);list.add(m);
    m=uci::uciToMove(b,"d5c6");b.makeMove(m);list.add(m);
    m=uci::uciToMove(b,"h7h6");b.makeMove(m);list.add(m);
    m=uci::uciToMove(b,"c6b7");b.makeMove(m);list.add(m);
    m=uci::uciToMove(b,"h6h5");b.makeMove(m);list.add(m);
    m=Move::make<Move::PROMOTION>(Square::underlying::SQ_B7,
                                  Square::underlying::SQ_A8 ,PieceType::QUEEN);
    cout<<b<<endl;

    for ( auto e : list)
    {
      cout<<e<<endl;
      
      
    }
    cout<<b.getFen()<<endl;
    
    cout<<"us color white"<<endl;
    cout<<b.us(Color::WHITE)<<endl;
    cout<<"us color black" <<endl;
    cout<<b.us(Color::BLACK)<<endl;
    cout<<"them color white" <<endl;
    cout<<b.them(Color::WHITE)<<endl;
    cout<<"them color black" <<endl;
    cout<<b.them(Color::BLACK)<<endl;
    cout<<" b all" <<endl;
    
    cout<<b.all()<<endl;
    
    Bitboard c= b.pieces(PieceType::ROOK);
    cout<<c<<endl;
    cout<<b.isInsufficientMaterial()<<endl;
    
    Square s(Rank::RANK_1,File::FILE_A);
    cout<<"ok :"<<b.at(s)<<endl;
        
    
    cout<<b.getCastleString()<<endl;
    
    
    cout<<"end"<<endl;



    
    
    
     
        
}
