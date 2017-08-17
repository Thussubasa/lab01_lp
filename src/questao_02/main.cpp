#include <iostream>
#include 'fatorial.h'
#include 'primalidade.h'

int main(void){

  int n, fat, anterior;

  cout << "Conversor" endl;
  cin >> n;

  fat = fatorial(n);
  anterior = primoAnterior(fat);

  cout << "Maior numero primo anterior ao fatorial de 5 (120) é:" << anterior << endl;

  return 0;
}
