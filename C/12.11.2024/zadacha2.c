/*Направете програма, която да намира най-малко 
общо кратно на две числа. Пример: a=12, б=18, 
най-малко общо кратно = 36. Изпълнете първите 
две стъпки от процеса на компилация на тази 
програма и качете асембли кода заедно със 
задачата към заданието.*/
#include <stdio.h>
int NOD(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}
int NOK(int a, int b) {
    return (a * b) / NOD(a, b);
}
int main() {
    int a = 4, b = 6;
    int result = NOK(a, b);
    printf("%d", result);
    return 0;
}
