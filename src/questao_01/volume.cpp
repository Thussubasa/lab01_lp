#include "volume.h"
#include <cmath> 

double volumePriamede(double area_base, double altura)
{

    double volume;
    volume = (1/3) * area_base * altura;

    return volume;
}

double volumeCubo(double aresta)
{

    double volume;
    volume = pow(aresta, 3);

    return volume;
}

double volumeParalelepido(double aresta1, double aresta2, double aresta3)
{

    double volume;
    volume = aresta1 * aresta2 * aresta3;

    return volume;
}

double volumeEsfera(double raio)
{

    double volume;
    volume = (4/3) * PI * pow(raio, 3);

    return volume;
}
