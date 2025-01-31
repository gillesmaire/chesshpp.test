# Presentation 

### Chess.hpp

The file chess.hpp is to include in you project and contains
all the code. 
You don'et need to make a library




##  Board 

~~~cpp
Board b(constants::STARTPOS)
~~~

generate a Board initalized as regular game

You can debug a board for example with one of the
two functions, the first one display chess board from Black
player, the other from White player.

~~~cpp
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

~~~

The second function will display 

~~~
--------
rnbqkbnr
pppppppp
........
........
........
........
PPPPPPPP
RNBQKBNR
--------
~~~~

You can generate a Board from a FEN by the method

~~~cpp
Board::Board(std::string_view fen)
~~~

or

~~~cpp
void setFen(std::string_view fen);
~~~

From a Board you can generate a FEN by the function 


~~~cpp
std::string getFen(bool moveCounters = true);
~~~



## Bitboard

BitBoard is use to see the presence of  piece on a square  : 

 - O : no piece 
 - 1 : a piece
 
The value 1 can be 1 black or 1 white piece on the square 

BitBoard are construct from Board with one on the following methods
   - us(Color color)
   - them(Color color)
   - all to see the non empty cases
   - pieces show the presence of a piece ( with or without color, you have the choice
   with 2 functions.
   
   
~~~cpp
Bitboard c= b.pieces(PieceType::ROOK);
~~~
   
us Color black is same a them color white


~~~cpp
cout<<b.us(Color::WHITE)<<endl;
~~~

The us method gives the chessboard with 1 where you have pieces

~~~
00000000
00000000
00000000
00000000
00001000
00000000
11110111
11111111
~~~

The them method gives the chessboard with 1 whee your oppenent has pieces

The methods to produce Bitboard are all() and occ()



## PackedBoard

The are also Packboard a concurent of FEN not readable but more compact.


## Moves

### Presentation 

You can make a move on the board with makeMove(move)

~~~
Board b(constants::STARTPOS)
Move m;
m.uci::uciToMove(board,"e2e4");
b.makemove(move)
~~~

uciToMove read the move in e2e4 syntax without any information 
about the piece unless the piece on the departure square : e2 ie 
a pawn.


The Move will be seen with the method printBoardWhite

You can add many moves : 

~~~
m=uci::uciToMove(b,"d7d5");b.makeMove(m);list.add(m);
m=uci::uciToMove(b,"e4d5");b.makeMove(m);list.add(m);
~~~

But wih this method you will not be able to  suppress moves or
to suppress a move. 

We will see Movelist who is a list of moves. 

If you add an erroneous move you will have a error message.


You can unmake a move by the function unmakeMove(const Move move);


### Functions with moves 


- isCapture : checkif a move is a capture, enpassant moves are also considered captures.

~~~cpp
bool isCapture(const Move move);
~~~


### Miscellaneous 

- Color sideToMove()  give the side to move 
- bool isRepetition(int count = 2); move is a repetition ?
- bool isInsufficientMaterial();

~~~cpp
cout<<b.isInsufficientMaterial()<<endl;
~~~

- Square : at 

~~~cpp
Square s(Rank::RANK_1,File::FILE_A);
cout<<"ok :"<<b.at(s)<<endl;
~~~

- CastlingRights castlingRights();

~~~cpp
~~~
