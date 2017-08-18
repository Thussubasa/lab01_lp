#include "area.h"
#include <cmath> 

double areaTriangulo(double base, double altura)
{

    double area;
    area = (base * altura) / 2;

    return area;
}

double areaQuadrado(double lado)
{

    double area;
    area = pow(lado, 2);

    return area;
}

double areaRetangulo(double base, double altura)
{

    double area;
    area = base * altura;

    return area;
}

double areaCirculo(double raio)
{
    double area;
    area = PI * pow(raio, 2);

    return area;
}

double areaPriamede(double area_base, double area_lateral)
{

    double area;
    area = (4*area_base) + area_base;

    return area;
}

double areaCubo(double aresta)
{

    double area;
    area = 6 * pow(aresta, 2);

    return area;
}

double areaParalelepido(double aresta1, double aresta2, double aresta3){

    double area;
    area = 2*(aresta1 * aresta2) + 2*(aresta1 * aresta3) + 2*(aresta2 * aresta3);

    return area;
}

double areaEsfera(double raio){

    double area;
    area = 4 * PI * pow(raio, 2);

    return area;
}
