#include <stdio.h>
#include "gc.h"

int main(void) {
int *p;
int n;
printf("\nDigite o número de termos do array:\n");
scanf("%d", &n);
p = (int*) GC_malloc_atomic(n*sizeof(int));

printf("\nDigite os n termos do array:\n");
for(int i=0; i<n;i++){
  scanf("%d", &p[i]);
}

for(int i=0; i<n;i++){
  printf("%d", p[i]);
}

  return 0;
}