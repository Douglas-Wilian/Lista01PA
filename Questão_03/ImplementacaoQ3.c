#include <stdio.h>


int main(void){
int i=5, *p;
p = &i;

printf("%p %d %d %d %d\n\n", p,*p+2,**&p,3**p,**&p+4);

//Como i ocupa o endereco 4094, podemos mostrar esse endereco instituindo-o como um inteiro para que o programa mostre esse valor:
printf("%d %d %d %d %d", 4094,*p+2,**&p,3**p,**&p+4);

return 0;
}