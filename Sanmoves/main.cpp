    #include <iostream>
    #include "../chess.hpp"
    
    using namespace std;
    using namespace chess;
    
    int main()
    {
        // initialize the board to START POS
        Board b;
        Move m;
        m=uci::parseSan(b, std::string_view ("e2e4"));b.makeMove(m);
         m=uci::parseSan(b, std::string_view ("d7d5"));b.makeMove(m);
        m=uci::parseSan(b, std::string_view ("e4xd5"));b.makeMove(m);
         m=uci::parseSan(b, std::string_view ("c7c6"));b.makeMove(m);
        m=uci::parseSan(b, std::string_view ("d5xc6"));b.makeMove(m);
         m=uci::parseSan(b, std::string_view ("Bc8f5"));b.makeMove(m);
        m=uci::parseSan(b, std::string_view ("c6xb7"));b.makeMove(m);
         m=uci::parseSan(b, std::string_view ("Nb8c6"));b.makeMove(m);
        m=uci::parseSan(b, std::string_view ("b7xa8=Q"));b.makeMove(m);
         m=uci::parseSan(b, std::string_view ("h7h5"));b.makeMove(m);
        m=uci::parseSan(b, std::string_view ("Nb1c3"));b.makeMove(m);
         m=uci::parseSan(b, std::string_view ("h5h4"));b.makeMove(m);
        m=uci::parseSan(b, std::string_view ("g2g4"));b.makeMove(m);
         m=uci::parseSan(b, std::string_view ("h4xg3"));b.makeMove(m);
        m=uci::parseSan(b, std::string_view ("d2d3"));b.makeMove(m);
         m=uci::parseSan(b, std::string_view ("Ng8h6"));b.makeMove(m);
        m=uci::parseSan(b, std::string_view ("Bc1d2"));b.makeMove(m);
         m=uci::parseSan(b, std::string_view ("g7g6"));b.makeMove(m);
        m=uci::parseSan(b, std::string_view ("a2a3"));b.makeMove(m);
         m=uci::parseSan(b, std::string_view ("Bf8g7"));b.makeMove(m);
        m=uci::parseSan(b, std::string_view ("Qd1e2"));b.makeMove(m);
         m=uci::parseSan(b, std::string_view ("O-O"));b.makeMove(m);
        m=uci::parseSan(b, std::string_view ("O-O-O"));b.makeMove(m);
         m=uci::parseSan(b, std::string_view ("Nh6g4"));b.makeMove(m);
        m=uci::parseSan(b, std::string_view ("Kc1b1"));b.makeMove(m);
         m=uci::parseSan(b, std::string_view ("Nge5"));b.makeMove(m);
        cout<<b<<endl;

        
    }
