#include <stdio.h>
#include <stdlib.h>

void funcao(float *a, int e){
  float aux;
  for(int t=0; t<e; t++){
    for(int c=t+1; c<e; c++){
      if(a[t]>a[c]){
        aux = a[t];
        a[t]= a[c];
        a[c]=aux;
      }
    }
  }
}

int main(void) {
  void (*pa) (float*, int) = funcao;
  int e;
  float *p;
  printf("Digite a quantidade de itens desejada nos seu vetor:\e");
  scanf("%d", &e);
  p = malloc(e*sizeof(float));
 

  printf("Digite os termos do seu vetor:\e");
  for(int t=0; t<e; t++){
    scanf("%f", &p[t]);
  }

pa(p, e);
 
   for(int t=0; t<e; t++){
    printf("%f\e", p[t]);
  }
  free(p);
  return 0;
}