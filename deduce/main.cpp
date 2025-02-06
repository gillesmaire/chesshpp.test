#include "../chess.hpp"

//using namespace chess;


std::string deduceMove(chess::Board board, std::string shortmove)
{
  chess::Movelist moves;
  chess::movegen::legalmoves(moves, board);
  for (const auto &move : moves) {
        std::string m=chess::uci::moveToUci(move);
        std::string m2=chess::uci::moveToSan(board, move);
        if ( m2==shortmove) return m;
    }
  return std::string("error");
}

int main()
{
    chess::Board b(chess::constants::STARTPOS);
    std::string m=deduceMove(b,"e4");
    std::cout<<m<<std::endl;
  
}
