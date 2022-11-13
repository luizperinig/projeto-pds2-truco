#include "carta.hpp"
#include <vector>

class Mesa{

    private: 
        Carta _carta1;
        Carta _carta2;
        std::vector<Carta> _baralho;
    public:
    
        void CriaBaralho(); //Vinícius 13/11 - Adicionei a função CriaBaralho() para criar o baralho de cartas a serem usadas//

        void compareCartas();
        int showPontos();   
        void chamaTruco();
        void viraCarta();
        void testeTeste();
};