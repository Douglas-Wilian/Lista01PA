#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "gc.h"

int main(void){
int n;
float tempo1=0, tempo2=0;
int *p;
printf("Digite 1 para testar a Libgc:\n");
scanf("%d", &n);

while(n==1){
clock_t t;


t=clock();

p = (int*) GC_malloc_atomic(3*sizeof(int));

printf("Digite os termos do vetor:\n");

	for(int i=0; i<3; i++){
	scanf("%d", &p[i]);}
	
printf("Os termos do vetor:\n");
	for(int i=0; i<3; i++){
	printf("%d ", p[i]);
	printf("\n");}
		
t = clock();
printf("O tempo é %ld clicks = (%f segundos)\n", t, ((float)t)/CLOCKS_PER_SEC);
tempo1=((float)t)/CLOCKS_PER_SEC;

printf("Digite 1 para testar a Libgc novamente e 2 para a alocacao normal:\n");
scanf("%d", &n);	

}
while(n==2){
clock_t t;
t=clock();

p = malloc(3*sizeof(int));

printf("Digite os termos do vetor:\n");

	for(int i=0; i<3; i++){
	scanf("%d", &p[i]);}
	
printf("Os termos do vetor:\n");
	for(int i=0; i<3; i++){
	printf("%d ", p[i]);
	printf("\n");}
	
free(p);
	
t = clock();
printf("O tempo é %ld clicks = (%f segundos)\n", t, ((float)t)/CLOCKS_PER_SEC);	
tempo2 = ((float)t)/CLOCKS_PER_SEC;

printf("Digite 2 para testar a alocacao normal novamente e 3 para obter os resultados:\n");
scanf("%d", &n);
}
printf("Tempo Libgc = %f\n", tempo1);
printf("Tempo Malloc = %f\n", tempo2);
return 0;
}
