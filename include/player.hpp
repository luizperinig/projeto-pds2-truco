#include <list>
#include "carta.hpp"

class Player{
    private:
        int _pontos;
        std::list<Carta> _mao;

        const int _maxRoundPontos = 3;  // 3 pontos para ganhar a rodada

    public:
        
        // Luiz 22/11    PONTUAÇÃO DE RODADA   -MAX 3-     (3 RODADAS, 1 PONTO GANHO A CADA RODADA GANHA)
        int getRoundPontos();
        void setRoundPontos(int pontos);

        

        std::string getMao();
        void setMao();
        int kkkkkkkkkkestouficandoloko;
};