#include <iostream>
#include <string>

class Carta {
private:
    int _valor;
    std:: string _simbolo;

public:
    int getValor();
    void setValor(int valor);
    std:: string getSimbolo(); 
    void setSimbolo(std:: string simbolo);
    
};