/*
predprocesor
predprocesi, kompilator i oshte dve pri prevod na kod
predprocesor podgotvq koda (include - da se vmukne fila za prevod na edinici i nuli)
vsichki directivi zapochvat s #
define - kato include

*/
#include <stdio.h>
#define SWAP(A, B, TYPE)\
TEMP = A; \
A = B; \
B = TEMP; \
printf("%d ", A); \
printf("%d", B); \

int main(){
    int TEMP, A, B;
    SWAP(2, 4, int)
    return 0;
}