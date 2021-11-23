#include <stdio.h>

int main(void) {
int pulo[10]={2,4,6,8,10};

printf("*(pulo+4) = %d\n", *(pulo+4));
printf("*(pulo+8) = %d\n", *(pulo+8));
printf("*pulo+4 = %p\n", pulo+4);
printf("*pulo+8 = %p\n", pulo+8);
// A orimeira expressao leva o terceiro termo.
  return 0;
}