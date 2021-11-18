#include <stdio.h>
#include <stdlib.h>

void funcao(float *q, int n){
  float aux;
  for(int i=0; i<n; i++){
    for(int j=i+1; j<n; j++){
      if(q[i]>q[j]){
        aux = q[i];
        q[i]= q[j];
        q[j]=aux;
      }
    }
  }
}

int main(void) {
  void (*pq) (float*, int) = funcao;
  int n;
  float *p;
  printf("Digite a quantidade de itens desejada nos seu vetor:\n");
  scanf("%d", &n);
  p = malloc(n*sizeof(float));
 

  printf("Digite os termos do seu vetor:\n");
  for(int i=0; i<n; i++){
    scanf("%f", &p[i]);
  }

pq(p, n);
 
   for(int i=0; i<n; i++){
    printf("%f\n", p[i]);
  }
  free(p);
  return 0;
}