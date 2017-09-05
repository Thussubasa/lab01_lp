#include "sapo.h"
#include <random>

Sapo::Sapo(int i):rd(), gen(rd()), dis(1, 20) {
    id = i;
    distancia =  0;
    pulos = 0;
}

double 
Sapo::getDistanciaTotal(){
    return distanciaTotal;
}

int 
Sapo::getId(){
    return id;
}

void
Sapo::setId(int i){
    id = i;
}

double 
Sapo::getDistancia(){
    return distancia;
}

void
Sapo::setDistancia(double d){
    distancia = d;
}

int 
Sapo::getPulos(){
    return pulos;
}

void 
Sapo::pular(){
    distancia += std::round(dis(gen));
    pulos++;
}
