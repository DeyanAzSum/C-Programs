/*Направете програма, която да принтира
 таблица с информация за всеки един целочислен 
 тип в C. Всеки ред от таблицата трябва да 
 съдържа името на типа, формата, чрез който 
 се принтира, колко байта заема, максималната 
 стойност на знаковата (signed) версията на типа, 
 минималната стойност на знаковата (signed) 
 стойност на типа  и формата на безнаковата 
 версия и максималната стойност на безнаковата 
 версия на типа (unsigned). Можете да използвате 
 макро за да съкратите работата по принтирането 
 на данните.*/
#include <stdio.h>
#include <limits.h>

int main(void) {

  printf("%-10s %-10s %-10s %-10s %-10s %-10s %-10s\n", "Tip", "Format", "Baitove", "Min stoinost signed", "Max stionost signed", "Max stionost unsigned", "Format usigned");
  printf("%-10s %-10s %-10d %-10d %-10d %-10d %-10s \n", "char", "%%c", 1, -128, 127, 255, "%%u");
  printf("%-10s %-10s %-10d %-10d %-10d %-10d %-10s \n", "short", "%%hd", 2, -32 768, 32 767, 65 535, "%%hu");
  printf("%-10s %-10s %-10d %-10d %-10d %-10d %-10s \n", "int", "%%d", 4, -2 147 483 648, 2 147 483 647,  4,294,967,295, "%%u");
  printf("%-10s %-10s %-10d %-10d %-10d %-10d %-10s \n", "long", "%%ld", 4 i 8, -2 147 483 648, 2 147 483 647 ili 9 223 372 036 854 775 807, "%%lu");
  printf("%-10s %-10s %-10d %-10d %-10d %-10d %-10s \n", "float", "%%f", 4, ±1.5*10-45, ±3.4*1038, "nqma", "nqma");
  printf("%-10s %-10s %-10d %-10d %-10d %-10d %-10s \n", "double", "%%lf", 4, ±5.0*10-324, ±1.7*10308, "nqma", "nqma");
  printf("%-10s %-10s %-10d %-10d %-10d %-10d %-10s \n", "long long", "%%lld", 8, -9 223 372 036 854 775 808, 9 223 372 036 854 775 807, 18 446 744 073 709 551 615, "%%llu");
  printf("%-10s %-10s %-10d %-10d %-10d %-10d %-10s \n", "long double (80 bytes)", "%%Lf", 8, 3.3621031431120935*10^-4932, 1.1897314953572318*10^4932, "nqma" , "nqma");
  printf("%-10s %-10s %-10d %-10d %-10d %-10d %-10s \n", "long double (128 bytes)", "%%Lf", 8, 3.3621031431120935*10^-4932, 1.1897314953572318*10^4932, "nqma" , "nqma");

  return 0;
}
