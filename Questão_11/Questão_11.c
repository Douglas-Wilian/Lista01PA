#include <stdio.h>


int main(void){
    float aloha[10], coisas[10][5], *pf, value=2.2;
    int i=3;

//Expressao a:

aloha[2]=value;
printf("%f", aloha[2]); //EXPRESSAO VALIDA

//Expressao b:
scanf("%f", &aloha) //EXPRESSAO INVALIDA - MANDA O USUARIO DIGITAR O ENDERECO.

//Expressao c:

aloha = "value"; //EXPRESSAO INVALIDA


//Expressao d:
printf("%f", aloha); //EXPRESSAO INVALIDA

//Expressao e:

coisas[4][4] = aloha[3]; //EXPRESSAO VALIDA

//Expressao f:

coisas[5] = aloha; // EXPRESSAO INVALIDA

//Expressao g:

pf = value; // EXPRESSAO INVALIDA

//Expressao h:

pf = aloha; //EXPRESSAO VALIDA

return 0;
}