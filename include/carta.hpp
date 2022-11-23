#include <iostream>
#include <string>

class Carta {

private:
    int _valor;
    std:: string _simbolo;

public:
   Carta(int valor, std::string simbolo);  //Vinícius 13/11 - Criei um construtor para a classe e removi os sets//

    int getValor();
    std::string getSimbolo(); 

};