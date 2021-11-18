#include <stdio.h>
#include <stdlib.h>

void funcao(float **a, float **b, float **c, int nca, int nla, int ncb){
 
    for(int i=0;i<nla;i++){
        for(int j=0;j<ncb;j++){
            c[i][j]= 0;
            for(int n=0;n<nca;n++){
            c[i][j] = c[i][j] + a[i][n]*b[n][j];
    }
      }
    }
  
}

int main(void) {
void (*func) (float**, float**, float **, int, int, int) = funcao;
float **A, **B, **C;
int nla, nca, ncb;

printf("Informe o numero de linhas e colunas de A, respectivamente:\n");
scanf("%d", &nla);
scanf("%d", &nca);

printf("Informe o numero de colunas de B:\n");
scanf("%d", &ncb);

// ALOCACAO DAS MATRIZES
A = malloc(nla*sizeof(float*));
A[0] = malloc(nla*nca*sizeof(float));

for(int i=1; i<nla; i++){
  A[i] = A[i-1] + nca;
}

B = malloc(nca*sizeof(float*));
B[0] = malloc(nca*ncb*sizeof(float));

for(int i=1; i<nca; i++){
  B[i] = B[i-1] + ncb;
}

C = malloc(nla*sizeof(float*));
C[0] = malloc(nla*ncb*sizeof(float));

for(int i=1; i<nla; i++){
  C[i] = C[i-1] + ncb;
}
// FIM DA ALOCACAO

printf("VALORES DA MATRIZ A:\n");

for(int i=0; i<nla; i++){
  for(int j=0; j<nca; j++){
    scanf("%f", &A[i][j]);
  }
}


printf("\nVALORES DA MATRIZ B:\n");

for(int i=0; i<nca; i++){
  for(int j=0; j<ncb; j++){
    scanf("%f", &B[i][j]);
  }
}

printf("\nMATRIZ A:\n");

for(int i=0; i<nla; i++){
  for(int j=0; j<nca; j++){
    printf("%f ", A[i][j]);
  }
  printf("\n");
}


printf("\nMATRIZ B:\n");

for(int i=0; i<nca; i++){
  for(int j=0; j<ncb; j++){
    printf("%f ", B[i][j]);
  }
  printf("\n");
}

func(A, B, C, nca, nla, ncb);

printf("\nMATRIZ C=AB:\n");

for(int i=0; i<nla; i++){
  for(int j=0; j<ncb; j++){
    printf("%f ", C[i][j]);
  }
  printf("\n");
}

return 0;
}