#include "player.hpp"


//PONTUACAO

int Player::getRoundPontos(){
    return _pontos;
}

void Player :: setRoundPontos(int pontos){
    _pontos += pontos;
}