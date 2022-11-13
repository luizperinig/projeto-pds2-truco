//Vinícius 13/11 - Apenas construi a carta.cpp de acordo com o hpp//
#include "carta.hpp"

Carta::Carta(int valor, std::string simbolo){
    _valor = valor;
    _simbolo = simbolo;
}

int Carta::getValor(){
    return _valor;
}

std::string Carta::getSimbolo(){
    return _simbolo;
}