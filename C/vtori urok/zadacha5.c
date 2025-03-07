/*Направете макро функция (SWAP(А, B, TYPE)), 
което да разменя стойностите на две променливи 
от произволен тип. Помощ: въведете типа като 
допълнителен аргумент на макро функцията. 
Демонстрирайте използването на подобно макро. 
Когато дефинирате макрото за да се чете по лесно 
кодът, можете да слагата “\” за да направите макрото 
на няколко реда.*/
#include <stdio.h>
#define SWAP(A, B, TYPE) { \
    TYPE temp = A; \
    A = B; \
    B = temp; \
}
int main() {
    int x = 1, y = 2;
    SWAP(x, y, int){
    printf("%d %d", x, y);
    }
    return 0;
}