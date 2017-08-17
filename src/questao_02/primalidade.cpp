#include "fatorial.h"

bool isPrimo(int num, int divisor){
  if(divisor == 1)
    return true;
  else
    if(num % divisor == 0)
      return false;
  else
      return isPrimo(num, divisor-1)
}


int primoAnterior(int num){
    
    if(isPrimo(num, num-1))
        return true;
    else
        primoAnterior(num-1);
}


