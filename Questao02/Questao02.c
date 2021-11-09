#include <stdio.h>

int main(void){
    int i=3, j=5;
    int *p, *q;

    p = &i;
    q = &j;

//Expressao 1:
    printf("p == &i = %d\n", p == &i);

//Expressao 2:
     printf("*p - *q = %d\n", *p - *q);

//Expressao 3:
    printf("**&p = %d\n", **&p);

//Expressao 4:
    printf("3 - *p/(*q) + 7 = %d\n", 3 - *p/(*q) + 7);

//Observacao:
/* A operacao acima considerara apenas os valores inteiros, por isso o resultado sera 10. Se desejar obter o valor real da operacao,
a seguinte implementacao deve ser realizada:*/

     printf("3 - *p/(*q) + 7 = %d\n", 3 - (double) *p/(*q) + 7);


return 0;
}