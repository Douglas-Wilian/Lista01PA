#include <stdio.h>

int main(void){
    int i=3, j=5;
    int *p, *q;

    p = &i;
    q = &j;

//Expressao 1:
    printf("p == &i = %d\n\n", p == &i);

//Expressao 2:
     printf("*p - *q = %d\n\n", *p - *q);

//Expressao 3:
    printf("**&p = %d\n\n", **&p);

//Expressao 4:
    printf("3 - *p/(*q) + 7 = %d\n\n", 3 - *p/(*q) + 7);

//Observacao:
/* A operacao acima considerara apenas os valores inteiros, por isso o resultado sera 10. Se desejar obter o valor real da operacao,
a seguinte implementacao deve ser realizada:*/

     printf("3 - *p/(*q) + 7 = %f\n\n", 3 - (float) *p/(*q) + 7);


return 0;
}