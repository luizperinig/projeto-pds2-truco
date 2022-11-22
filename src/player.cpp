#include "player.hpp"


//PONTUACAO

void Player :: setRoundPontos(int pontos){
    _pontos += pontos;
}

int Player::getRoundPontos(){
    return _pontos;
}