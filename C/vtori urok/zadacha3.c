/*Направете макро, което да дефинира помощен инструмент за дебъгване,
който да принтира името на променливата, нейната стойност файлът в 
който се използва и линията от код, която принтира тази информация*/
#include <stdio.h>
#define DEBUGING(A) printf("The value of " #A " is %d\n", A ) \
printf("The file is %s", __FILE__)\
printf("The line is %d", __LINE__)\

int main(void) {
  int i = 28;
  DEBUGING(i);
  return 0;
}