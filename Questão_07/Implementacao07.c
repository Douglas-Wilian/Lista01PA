#include <stdio.h>

int main(void) {
int pulo[5]={1,2,3,4,5};

printf("*(pulo+2) = %d\n", *(pulo+2));
printf("*(pulo+4) = %d\n", *(pulo+4));
printf("*pulo+2 = %p\n", pulo+2);
printf("*pulo+4 = %p\n", pulo+4);

  return 0;
}