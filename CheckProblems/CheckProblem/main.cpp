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
#include <../../chess.hpp>
    
    using namespace std;
    using namespace chess;
    
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


int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    Board b(constants::STARTPOS);
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
    cout<<uci::moveToSan(b,m)<<endl;
    cout<<uci::moveToLan(b,m)<<endl;
    b.makeMove(m);
    m=Move::make<Move::NORMAL>(Square::underlying::SQ_D7,
                                  Square::underlying::SQ_D6);
    b.makeMove(m);

  //  m=uci::uciToMove(b,"b7a8");b.makeMove(m);list.add(m);
     
    
    printBoardWhite(b);
    return a.exec();
}
