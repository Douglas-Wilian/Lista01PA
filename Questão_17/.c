#include <stdio.h>
#include <stdlib.h>
void vetor(float vetor1[],float vetor2[],float vetor3[],int n){
for(int i=0;i<n;i++){
  vetor3[i]=vetor1[i]+vetor2[i];
}
for(int i=0;i<n;i++){
  printf("%f \n",vetor3[i]);
}
}
int main() {
  int n;
  float *vetor1,*vetor2,*vetor3=0;
  printf("informe o tamanho dos vetores:\n");
  void (*p)(float*,float*,float*,int)=vetor;
  scanf("%i",&n);
  vetor1=malloc(n*sizeof(float));
  vetor2=malloc(n*sizeof(float));
  vetor3=malloc(n*sizeof(float));
  printf("os valores do vetor um é: \n");
  for(int i=0;i<n;i++){
    scanf("%f",&vetor1[i]);
  }
  printf("os valores do vetor dois é:\n");
  for(int i=0;i<n;i++){
    scanf("%f",&vetor2[i]);
  }
 printf(" a soma dos vetores é: \n");
 p(vetor1,vetor2,vetor3,n);
  return 0;
  free(vetor1);
  free(vetor2);
  free(vetor3);
}