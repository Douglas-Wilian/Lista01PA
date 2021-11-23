#include <stdio.h>
int main(void) {
  int mat[4], *p, x;
  p = mat + 1;
  p = mat;
  p = mat;
  x = (*mat);
  printf("%i \n",x);
  return 0;