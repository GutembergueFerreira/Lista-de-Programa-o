#include <stdio.h>

int main(void){
    int i=15, j=25;
    int *a, *b;

    a = &i;
    b = &j;

//Expressao 1:
    printf("a == &i = %d\n\n", a == &i);

//Expressao 2:
     printf("*a - *b = %d\n\n", *a - *b);

//Expressao 3:
    printf("**&a = %d\n\n", **&a);

//Expressao 4:
    printf("15 - *a/(*b) + 7 = %d\n\n", 17 - *a/(*b) + 7);


     printf("15 - *a/(*b) + 7 = %f\n\n", 15 - (float) *a/(*b) + 7);


return 0;
}