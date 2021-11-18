#include <stdio.h>
#include <stdlib.h>

int comparador(float* a, float*b){
if(*a > *b){
  return 1;
}
else if(*a < *b){
  return -1;
}
else{
  return 0;
}
}
void ordenador(float *q, int n, int (*comparador)(float *a, float *b)) {
  int aux;
  for(int k=0; k<n; k++){
  for(int j=k+1; j<n; j++){
    if(comparador(q+k, q+j)>0){
    aux = q[k];
    q[k] = q[j];
    q[j] = aux;
    }
  }
  }
  
}

int main(void) {
 
  int n;
  float *p;
  printf("Digite a quantidade de itens desejada nos seu vetor:\n");
  scanf("%d", &n);
  p = malloc(n*sizeof(float));
 

  printf("Digite os termos do seu vetor:\n");
  for(int i=0; i<n; i++){
    scanf("%f", &p[i]);
  }

 //pq(p,n);
 ordenador(p, n, comparador);
 
   printf("\n");
   for(int i=0; i<n; i++){
    printf("%f\n", p[i]);
  }
  free(p);
  return 0;
}