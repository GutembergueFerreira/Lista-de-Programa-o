#include <stdio.h>
void testandoponteiro(int *ab){
 ++*ab;
}
int main() {
void testandoponteiro (int *ab);
int testando=1;
int *atestando=&testando;
testandoponteiro(atestando);
printf("%i \n",testando);
return 0;
}