// GPL 3.0 License
// myChessBase Project
// Copyright (c) 2025 Gilles Maire <gilles@gillesmaire.com>
//
// Permission is hereby granted, free of charge, to any person obtaining a copy
// of this software and associated documentation files (the "Software"), to deal
// in the Software without restriction, including without limitation the rights
// to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
// copies of the Software, and to permit persons to whom the Software is
// furnished to do so, subject to the following conditions:
//
// The above copyright notice and this permission notice shall be included in all
// copies or substantial portions of the Software.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
// SOFTWARE.
//
// THIS FILE IS AUTO GENERATED DO NOT CHANGE MANUALLY.
//
// Source: https://github.com/gillesmaire/myChessbase.git
//
//
// VERSION: 0.1


#include <QCoreApplication>
#include "chess.hpp"
#include <iostream>


using namespace chess;
using namespace std;

void printBoardBlack(  Board &p )
{
 cout <<"--------"<<endl;
 for ( int i=0; i<64; i++) {
           cout << std::string(p.at(Square(i)))   ;
           if ( (i+1)%8 == 0 ) cout << endl;
        }
 cout <<"--------"<<endl;
}

void printBoardWhite(  Board &p )
{
 cout <<"--------"<<endl;
 for ( int line=7; line>=0; line--) 
 {
 for ( int col=0; col<=7; col++) {
      cout << std::string(p.at(Square(line*8+col)))   ;
        }
  cout <<endl;
 }
 cout <<"--------"<<endl;
}

void up()
{
   
}


int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    Board b(constants::STARTPOS);
    
    Movelist list;
    Move m;
    
    
    printBoardWhite(b);
    
    m=uci::uciToMove(b,"e2e4");b.makeMove(m);list.add(m);
    m=uci::uciToMove(b,"d7d5");b.makeMove(m);list.add(m);
    m=uci::uciToMove(b,"e4d5");b.makeMove(m);list.add(m);
    m=uci::uciToMove(b,"c7c6");b.makeMove(m);list.add(m);
    m=uci::uciToMove(b,"d5c6");b.makeMove(m);list.add(m);
    m=uci::uciToMove(b,"h7h6");b.makeMove(m);list.add(m);
    m=uci::uciToMove(b,"c6b7");b.makeMove(m);list.add(m);
    m=uci::uciToMove(b,"h6h5");b.makeMove(m);list.add(m);
    m=uci::uciToMove(b,"b7a8");b.makeMove(m);list.add(m);
    
    
    printBoardWhite(b);
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

        

    
    
    
     
        
    return a.exec();
}
