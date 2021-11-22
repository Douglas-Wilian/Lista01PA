#include <stdio.h>
void testeponteiro(int *px){
 ++*px;
}
int main() {
void testeponteiro (int *px);
int teste=1;
int *pteste=&teste;
testeponteiro(pteste);
printf("%i \n",teste);
return 0;
}
