#include "perimetro.h"

double perimetroTriangulo(double lado)
{

    double perimetro;
    perimetro = 3 * lado;

    return perimetro;
}

double perimetroQuadrado(double lado)
{

    double perimetro;
    perimetro = 4 * lado;

    return perimetro;
}

double perimetroRetangulo(double base, double altura)
{

    double perimetro;
    perimetro = 2 * (base + altura);

    return perimetro;
}

double perimetroCirculo(double raio)
{

    double perimetro;
    perimetro = 2 * PI * raio;

    return perimetro;
}
