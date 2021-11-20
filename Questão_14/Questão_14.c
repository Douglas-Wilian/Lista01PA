#include <stdio.h>
#include <stdlib.h>


int comparador(const void *a, const void *b){ //Declaracao da funcao responsavel por comparar dois termos. 
  return (*(float*)a - *(float*)b); //Realização da comparacao do primeiro termo com o segundo.
}

int comparador2(const void *a, const void *b){// Declaracao da segunda funcao de comparacao, responsavel por definir as saidas que serao enviadas pro int main.
  if(*(float*)a > *(float*)b){
    return 1; //Se o primeiro termo for maior que o segundo, retorna 1;
  }
  else if(*(float*)b < *(float*)a){
    return -1; //Se o segundo termo for maior que o primeiro, retorna -1.
  }
  else {
    return 0; //Se forem iguais, retorna 0.
  }
}

int main(void) {
 int n; //Numero de termos do vetor.
  float *p; //Ponteiro que apontara para o vetor.
  printf("Digite a quantidade de itens desejada nos seu vetor:\n");
  scanf("%d", &n); //Recebe a quantidade de itens do vetor.
  p = malloc(n*sizeof(float)); //Alocacao do array utilizando a funcao malloc.


  printf("Digite os termos do vetor:\n");
   for(int i=0; i<n; i++){//Laco responsavel por receber cada termo do vetor.
    scanf("%f", &p[i]);
  }

  qsort(p,n, sizeof(float),comparador); //Ordenacao do vetor em ordem crescente pela funcao qsort, usando o comparador.

  for(int i=0; i<n; i++){//Impressao na tela do vetor ordenado.
    printf("%f\n", p[i]);
  }
 
  free(p);//Liberacao da memoria alocada para o vetor.
  return 0;
}