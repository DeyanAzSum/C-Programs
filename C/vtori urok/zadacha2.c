/*Направете function-like макро, което да 
използва троичния оператор за сравнение за 
да намира по-големия от 2 елемента.*/
#include <stdio.h>
#define MAKRO(A, B) ((A) > (B) ? (A) : (B)) 
int main(void){
    printf("%d ", MAKRO(4,5));
    return 0;
}