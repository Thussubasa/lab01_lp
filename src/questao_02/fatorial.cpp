#include "fatorial.h"

int fat (n){

  if ((n==1)|| (n==0)) return 1;
    else
      return fat(n-1)*n;
}
