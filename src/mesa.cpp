#include "mesa.hpp"

void Mesa::CriaBaralho(){
    //Vinícius 13/11 - Criei o vetor baralho com todas as cartas do truco em ordem crescente de valor//
    //ATENÇÃO -> Tem q resolver o problema de usar % e \ dentro das aspas
    //Quatro//
    _baralho.push_back(Carta(1, " _____ |4    || ^ ^ ||     || ^ ^ ||____h|")); //Espada
    _baralho.push_back(Carta(1, " _____ |4    || v v ||     || v v ||____h|")); //Coração
    _baralho.push_back(Carta(1, " _____ |4    || o o ||     || o o ||____h|")); //Ouro

    //Cinco//
    _baralho.push_back(Carta(2, " _____ |5    || ^ ^ ||  ^  || ^ ^ ||____S|")); //Espada
    _baralho.push_back(Carta(2, " _____ |5    || & & ||  &  || & & ||____S|")); //Paus
    _baralho.push_back(Carta(2, " _____ |5    || v v ||  v  || v v ||____S|")); //Coração
    _baralho.push_back(Carta(2, " _____ |5    || o o ||  o  || o o ||____S|")); //Ouro

    //Seis
    _baralho.push_back(Carta(3, " _____ |6    || ^ ^ || ^ ^ || ^ ^ ||____9|")); //Espada
    _baralho.push_back(Carta(3, " _____ |6    || & & || & & || & & ||____9|")); //Paus
    _baralho.push_back(Carta(3, " _____ |6    || v v || v v || v v ||____9|")); //Coração
    _baralho.push_back(Carta(3, " _____ |6    || o o || o o || o o ||____9|")); //Ouro

    //Sete
    _baralho.push_back(Carta(4, " _____ |7    || ^ ^ ||^ ^ ^|| ^ ^ ||____L|")); //Espada
    _baralho.push_back(Carta(4, " _____ |7    || & & ||& & &|| & & ||____L|")); //Paus

    //Dama(Q)
    _baralho.push_back(Carta(5, " _____ |Q  ww|| ^ {(||(.)%%|| |%%%||_%%%O|")); //Espada
    _baralho.push_back(Carta(5, " _____ |Q  ww|| o {(||o o%%|| |%%%||_%%%O|")); //Paus
    _baralho.push_back(Carta(5, " _____ |Q  ww|| o {(||(v)%%|| v%%%||_%%%O|")); //Coração
    _baralho.push_back(Carta(5, " _____ |Q  ww|| /\{(|| \/%%||  %%%||_%%%O|")); //Ouro

    //Valete(J)
    _baralho.push_back(Carta(6, " _____ |J  ww|| ^ {)||(.)% || | % ||__%%[|")); //Espada
    _baralho.push_back(Carta(6, " _____ |J  ww|| o {)||o o% || | % ||__%%[|")); //Paus
    _baralho.push_back(Carta(6, " _____ |J  ww||   {)||(v)% || v % ||__%%[|")); //Coração
    _baralho.push_back(Carta(6, " _____ |J  ww|| /\{)|| \/% ||   % ||__%%[|")); //Ouro

    //Rei(K)
    _baralho.push_back(Carta(7, " _____ |K  WW|| ^ {)||(.)%%|| |%%%||_%%%>|")); //Espada
    _baralho.push_back(Carta(7, " _____ |K  WW|| o {)||o o%%|| |%%%||_%%%>|")); //Paus
    _baralho.push_back(Carta(7, " _____ |K  WW||   {)||(v)%%|| v%%%||_%%%>|")); //Coração
    _baralho.push_back(Carta(7, " _____ |K  WW|| /\{)|| \/%%||  %%%||_%%%>|")); //Ouro

    //Ás
    _baralho.push_back(Carta(8, " _____ |A _  || ( ) ||(_'_)||  |  ||____V|")); //Paus
    _baralho.push_back(Carta(8, " _____ |A_ _ ||( v )|| \ / ||  .  ||____V|")); //Coração
    _baralho.push_back(Carta(8, " _____ |A ^  || / \ || \ / ||  .  ||____V|")); //Ouro

    //Dois
    _baralho.push_back(Carta(9, " _____ |2    ||  ^  ||     ||  ^  ||____Z|")); //Espada
    _baralho.push_back(Carta(9, " _____ |2    ||  &  ||     ||  &  ||____Z|")); //Paus
    _baralho.push_back(Carta(9, " _____ |2    ||  v  ||     ||  v  ||____Z|")); //Coração
    _baralho.push_back(Carta(9, " _____ |2    ||  o  ||     ||  o  ||____Z|")); //Ouro

    //Três
    _baralho.push_back(Carta(10, " _____ |3    || ^ ^ ||     ||  ^  ||____E|")); //Espada
    _baralho.push_back(Carta(10, " _____ |3    || & & ||     ||  &  ||____E|")); //Paus
    _baralho.push_back(Carta(10, " _____ |3    || v v ||     ||  v  ||____E|")); //Coração
    _baralho.push_back(Carta(10, " _____ |3    || o o ||     ||  o  ||____E|")); //Ouro

    //Manilhas
    _baralho.push_back(Carta(11, " _____ |7    || o o ||o o o|| o o ||____L|")); //7 de Ouros
    _baralho.push_back(Carta(12, " _____ |A .  || /.\ ||(_._)||  |  ||____V|")); //Ás de Espadas
    _baralho.push_back(Carta(13, " _____ |7    || v v ||v v v|| v v ||____L|")); //7 de Corações
    _baralho.push_back(Carta(14, " _____ |4    || & & ||     || & & ||____h|")); //4 de Paus(xulaskk)

}

int Mesa :: getMatchPontos(){
    return _matchPontos;
}

void Mesa :: setMatchPontos(int pontos){
    _matchPontos += pontos;
}