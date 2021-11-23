#include <stdio.h>
#include <stdlib.h>

void funcao(float **x, float **y, float **z, int nzx, int nwx, int nzy){
 
    for(int a=0;a<nwx;a++){
        for(int b=0;b<nzy;b++){
            z[a][b]= 0;
            for(int n=0;n<nzx;n++){
            z[a][b] = z[a][b] + x[a][n]*y[n][b];
    }
      }
    }
  
}

int main(void) {
void (*func) (float**, float**, float **, int, int, int) = funcao;
float **A, **B, **C;
int nwx, nzx, nzy;

printf("Numero de linhas e colunas de A, respectivamente:\n");
scanf("%d", &nwx);
scanf("%d", &nzx);

printf("Numero de colunas de B:\n");
scanf("%d", &nzy);

// ALOCACAO DAS MATRIZES
A = malloc(nwx*sizeof(float*));
A[0] = malloc(nwx*nzx*sizeof(float));

for(int a=1; a<nwx; a++){
  A[a] = A[a-1] + nzx;
}

B = malloc(nzx*sizeof(float*));
B[0] = malloc(nzx*nzy*sizeof(float));

for(int i=1; i<nzx; i++){
  B[i] = B[i-1] + nzy;
}

C = malloc(nwx*sizeof(float*));
C[0] = malloc(nwx*nzy*sizeof(float));

for(int i=1; i<nwx; i++){
  C[i] = C[i-1] + nzy;
}
// FIM DA ALOCACAO

printf("VALORES DA MATRIZ A:\n");

for(int i=0; i<nwx; i++){
  for(int j=0; j<nzx; j++){
    scanf("%f", &A[i][j]);
  }
}


printf("\nVALORES DA MATRIZ B:\n");

for(int i=0; i<nzx; i++){
  for(int j=0; j<nzy; j++){
    scanf("%f", &B[i][j]);
  }
}

printf("\nMATRIZ A:\n");

for(int i=0; i<nwx; i++){
  for(int j=0; j<nzx; j++){
    printf("%f ", A[i][j]);
  }
  printf("\n");
}


printf("\nMATRIZ B:\n");

for(int i=0; i<nzx; i++){
  for(int j=0; j<nzy; j++){
    printf("%f ", B[i][j]);
  }
  printf("\n");
}

func(A, B, C, nzx, nwx, nzy);

printf("\nMATRIZ C=AB:\n");

for(int i=0; i<nwx; i++){
  for(int j=0; j<nzy; j++){
    printf("%f ", C[i][j]);
  }
  printf("\n");
}
free(A[0]);
free(A);
free(B[0]);
free(B);
free(C[0]);
free(C);
return 0;
}