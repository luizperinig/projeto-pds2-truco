#include <iostream>
#include "player.hpp"
#include "carta.hpp"
#include "mesa.hpp"
#include "humano.hpp"
#include "bot.hpp"


int main(){
    std::cout<<"BEM VINDO AO TRUCO DOS PRIMOS"  <<std::endl;
    std::cout<<"-----------------------------"  <<std::endl;
   
    std::cout<< "Selecione o modo de jogo:"     <<std::endl;
    std::cout<< "1 - Humano vs Humano"          <<std::endl;
    std::cout<< "2 - Humano vs Bot"             <<std::endl;

    int modo;
    std::cin>>modo;

    if(modo == 1){
        std::cout<<"Humano vs Humano" <<std::endl;
        std::cout<<"-----------------" <<std::endl;

        std::cout<<"Jogador 1, digite seu nome: ";
        std::string nome1;
        std::cin>>nome1;

        std::cout<<"Jogador 2, digite seu nome: ";
        std::string nome2;
        std::cin>>nome2;

        Humano jogador1;
        Humano jogador2;

        jogador1.setNome(nome1);
        jogador2.setNome(nome2);

        std::cout<<"Jogador 1: "<<jogador1.getNome()<<std::endl;
        std::cout<<"Jogador 2: "<<jogador2.getNome()<<std::endl;

        Mesa mesa;
        mesa.CriaBaralho();

        

        

}

}
