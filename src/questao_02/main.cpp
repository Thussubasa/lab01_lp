#include <iostream>
using std::cin;
using std::cout;
using std::endl;

#include "fatorial.h"
#include "primalidade.h"

int main(void) {

  int n, fatorial, anterior;

  cout << "Conversor" << endl;
  cin >> n;

  fatorial = fat(n);
  anterior = primoAnterior(fatorial);

  cout << "Maior numero primo anterior ao fatorial de 5 (120) é:" << anterior << endl;

  return 0;
}
