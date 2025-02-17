#include <stdio.h>

int main(void) {

  float a1 = 5.47745447177;
  //Explicit typecasting
  int b1 = (int)a1;
  printf("%d\n", b1);

  int a7 = 5;
  int b7 = 2;
  float c7 = (float)a7 / b7;
  printf("%f\n", c7);

  return 0;
}