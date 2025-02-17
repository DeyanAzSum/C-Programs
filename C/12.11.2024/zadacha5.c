#include <stdio.h>
#include "maths.h"
int main() {
    int number;
    printf("Chislo za namirane na factorial: ");
    scanf("%d", &number);
    if (number < 0) {
        printf("Chisloto e otricatelno");
    } else {
        printf("%ld", factorial(number));
    }
    return 0;
}
// gcc -c maths.c -o maths.o
// ar rcs libmaths.a maths.o
// gcc zadacha5.c -L. -lmaths -o zadacha5.exe