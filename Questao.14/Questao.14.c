#include <stdio.h>
#include <stdlib.h>


int comparador(const void *x, const void *y){ //Funcao que ira comparar dois termos. 
  return (*(float*)x - *(float*)y); //Comparacao do primeiro termo com o segundo.
}

int comparador2(const void *x, const void *y){// Segunda funcao de comparacao, que definira as saidas que serao enviadas pro int main.
  if(*(float*)x > *(float*)y){
    return 5; //Sendo o primeiro termo maior que o segundo, retornara 1;
  }
  else if(*(float*)y < *(float*)x){
    return -5; //Sendo o segundo termo maior que o primeiro, retornara -1.
  }
  else {
    return 10; //Sendo os termos iguais, retornara 10.
  }
}

int main(void) {
 int nt; //Numero de termos do vetor.
  float *k; //Ponteiros que irao apontar para o vetor.
  printf("Digite a quantidade de itens desejados no seu vetor:\nt");
  scanf("%d", &nt); //Para receber a quantidade de itens do vetor.
  k = malloc(nt*sizeof(float)); //Arquivagem do array utilizando a funcao malloc.


  printf("Digite os termos do vetor:\n");
   for(int i=0; i<nt; i++){//Laco responsavel por receber cada termo do vetor.
    scanf("%f", &k[i]);
  }

  qsort(k,nt, sizeof(float),comparador); //Sequencia dos vetores em ordem crescente pela funcao qsort, usando o comparador.

  for(int i=0; i<nt; i++){//Impressao na tela do vetor ordenado.
    printf("%f\nt", k[i]);
  }
 
  free(k);//Liberacao da memoria alocada para o vetor.
  return 0;
}