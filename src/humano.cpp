#include "humano.hpp"

void Humano::setNome(std::string nome){
    _nome = nome;
}

std::string Humano::getNome(){
    return _nome;
}