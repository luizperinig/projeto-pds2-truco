#include "carta.hpp"
#include <vector>

class Mesa{

    private: 
        Carta _carta1;
        Carta _carta2;
        std::vector<Carta> _baralho;
        int _matchPontos;
        
        const int _maxMatchPontos = 12;  // 12 pontos para ganhar o jogo

    public:
    
        void CriaBaralho(); //Vinícius 13/11 - Adicionei a função CriaBaralho() para criar o baralho de cartas a serem usadas//

        //Luiz 22/11    PONTUAÇÃO DE PARTIDA   -MAX 12-    (GANHA A PARTIDA DE TRUCO QUEM OBTER 12 PONTOS PRIMEIRO 
        /// RODADA NORMAL = 2 PONTOS / RODADA TRUCO = 4 PONTOS / RODADA SEIS = 6 PONTOS / RODADA NOVE = 9 PONTOS/ RODADA QUEDA = 12 PONTOS)

        int getMatchPontos();
        void setMatchPontos(int pontos);

        void compareCartas();
        int showPontos();   
        void chamaTruco();
        void viraCarta();
        void testeTeste();
};