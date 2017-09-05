#include <iostream>
#include "sapo.h"

using std::cin;
using std::cout;
using std::endl;


double Sapo::distanciaTotal = 1000;

int main(){

int vencedor = 0;

Sapo s1(1);
Sapo s2(2);
Sapo s3(3);


while (vencedor == 0){
    s1.pular();
    if(s1.getDistancia() >= Sapo::distanciaTotal){

        cout << "O sapo 1 foi o vencedor com: " << s1.getPulos() <<" Pulos e com a distancia percorrida de:  " << s1.getDistancia()<< endl;
        break;
    }

    s2.pular();
    if(s2.getDistancia() >= Sapo::distanciaTotal){

        cout << "O sapo 2 foi o vencedor com: " << s2.getPulos() <<" Pulos e com a distancia percorrida de:  " << s2.getDistancia()<< endl;
        break;
    }

    s3.pular();
    if(s3.getDistancia() >= Sapo::distanciaTotal){

        cout << "O sapo 3 foi o vencedor com: " << s3.getPulos() <<" Pulos e com a distancia percorrida de:  " << s3.getDistancia()<< endl;
        break;
    }

}



}