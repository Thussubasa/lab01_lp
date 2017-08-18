#include <iostream>
#include "calcula.h"
#include "volume.h"
#include "perimetro.h"
#include "area.h"
#include <cmath> 

using std::cin;
using std::cout;
using std::endl;

void calcular(int index)
{
    switch (index)
    {
    case 0:
        cout << "Volte sempre" << endl;
        break;
    case 1:
        calculaTriangulo();
        break;
    case 2:
        caculaReatangulo();
        break;
    case 3:
        calculaQuadrado();
        break;
    case 4:
        calculaCirculo();
        break;
    case 5:
        calculaPiramede();
        break;
    case 6:
        calculaCubo();
        break;
    case 7:
        calculaParalelepido();
        break;
    case 8:
        calculaEsfera();
        break;
    default:
        cout << "Entre com uma opção valida" << endl;
        break;
    }
}
void calculaTriangulo()
{

    double lado, altura;

    cout << "Entre com o lado do triangulo" << endl;
    cin >> lado;

    altura = (lado * sqrt(3)) / 2;

    cout << "Area do triangulo: " << areaTriangulo(lado, altura) << endl;
    cout << "Perimetro do triangulo: " << perimetroTriangulo(lado) << endl;
}

void caculaReatangulo()
{

    double base, altura;
    cout << "Digite o tamanho da base do retangulo: " << endl;
    cin >> base;

    cout << "Digite o tamanho da altura do retangulo: " << endl;
    cin >> altura;

    cout << "Area do retangulo: " << areaRetangulo(base, altura) << endl;
    cout << "Perimetro do retangulo: " << perimetroRetangulo(base, altura) << endl;
}

void calculaQuadrado()
{

    double lado;
    cout << "Digite o tamanho do lado do quadrado: " << endl;
    cin >> lado;

    cout << "Area do quadrado: " << areaQuadrado(lado) << endl;
    cout << "Perimetro do quadrado: " << perimetroQuadrado(lado) << endl;
}

void calculaCirculo()
{

    double raio;
    cout << "Digite o tamanho do raio do circulo: " << endl;
    cin >> raio;

    cout << "Area do circulo: " << areaQuadrado(raio) << endl;
    cout << "Comprimento do circulo: " << perimetroCirculo(raio) << endl;
}

void calculaPiramede()
{

    double base, altura;
    cout << "Digite o tamanho da base do retangulo: " << endl;
    cin >> base;

    cout << "Digite o tamanho da altura do retangulo: " << endl;
    cin >> altura;

    cout << "Area do retangulo: " << areaRetangulo(base, altura) << endl;
    cout << "Perimetro do retangulo: " << perimetroRetangulo(base, altura) << endl;
}

void calculaCubo()
{

    double aresta;
    cout << "Digite o tamanho da aresta do cubo: " << endl;
    cin >> aresta;

    cout << "Area do cubo: " << areaCubo(aresta) << endl;
    cout << "Volume do cubo: " << volumeCubo(aresta) << endl;
}

void calculaParalelepido()
{

    double aresta1, aresta2, aresta3;
    cout << "Digite o tamanho da aresta1 do paralelepido: " << endl;
    cin >> aresta1;

    cout << "Digite o tamanho da aresta2 do paralelepido: " << endl;
    cin >> aresta2;

    cout << "Digite o tamanho da aresta3 do paralelepido: " << endl;
    cin >> aresta3;

    cout << "Area do paralelepido: " << areaParalelepido(aresta1, aresta2, aresta3) << endl;
    cout << "Volume do paralelepido: " << volumeParalelepido(aresta1, aresta2, aresta3) << endl;
}

void calculaEsfera()
{

    double raio;
    cout << "Digite o tamanho do raio da esfera: " << endl;
    cin >> raio;

    cout << "Area da esfera: " << areaCubo(raio) << endl;
    cout << "Volume da esfera: " << volumeCubo(raio) << endl;
}
