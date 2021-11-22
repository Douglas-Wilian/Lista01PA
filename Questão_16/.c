//Questão 14:
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int comparador(const void *a, const void *b){
  return (*(float*)a - *(float*)b);
}

int comparador2(const void *a, const void *b){
  if(*(float*)a > *(float*)b){
    return 1;
  }
  else if(*(float*)b < *(float*)a){
    return -1;
  }
  else {
    return 0;
  }
}

int main() {
  clock_t t;
 int n;
  float *p;
  t=clock();
  printf("Digite a quantidade de itens desejada nos seu vetor:\n");
  scanf("%d", &n);
  p = malloc(n*sizeof(float));


  printf("Digite os termos do vetor:\n");
   for(int i=0; i<n; i++){
    scanf("%f", &p[i]);
  }

  qsort(p,n, sizeof(float),comparador);

  for(int i=0; i<n; i++){
    printf("%f\n", p[i]);
  }
 t=clock()-t;
  printf ("o tempo é %ld clicks=(%f segundos)\n:",t,((float)t)/CLOCKS_PER_SEC);
  free(p);
  return 0;
}

//Agora questão 15:
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
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
 clock_t t;
  int n;
  float *p;
  t=clock();
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
  t=clock()-t;
  printf ("o tempo é %ld clicks=(%f segundos)\n:",t,((float)t)/CLOCKS_PER_SEC);
  free(p);
  return 0;
}