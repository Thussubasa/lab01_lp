#include "fatorial.h"

int fat(int num){

  if ((num==1)|| (num==0)) return 1;
    else
      return fat(num-1)*num;
}
