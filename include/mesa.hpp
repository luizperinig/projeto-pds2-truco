#include "carta.hpp"

class Mesa{

    private: 
        Carta _carta1;
        Carta _carta2;
    public:
        void compareCartas();
        int showPontos();   
        void chamaTruco();
        void viraCarta();
};