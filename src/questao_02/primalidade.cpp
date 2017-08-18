#include "primalidade.h"

bool isPrimo(int num, int divisor){
  if(divisor == 1)
    return true;
  else
    if(num % divisor == 0)
      return false;
  else
      return isPrimo(num, divisor-1);
}


long int primoAnterior(long int num){
    
    if(isPrimo(num, num-1))
        return num;
    else
       return primoAnterior(num-1);
}


