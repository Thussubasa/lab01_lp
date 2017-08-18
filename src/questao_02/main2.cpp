#include <iostream>

using std::cin;
using std::cout;
using std::endl;

#include "fatorial.h"
#include "primalidade.h"

int main(int argc, char* argv[]) {

  long int n, fatorial, anterior;

  n = atoi(argv[1]);

  fatorial = fat(n);
  anterior = primoAnterior(fatorial);

  cout << "Maior numero primo anterior ao fatorial de " << n << "(" << fatorial << ") é: " << anterior << endl;

  return 0;
}
