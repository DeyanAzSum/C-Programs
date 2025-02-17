/*Направете макро функция, която да сортира масив 
от произволен тип, и да може да сортира низходящо 
или възходящо в зависимост от аргумент, подаден на 
макрото. Пример за дефиниция на подобно макро функция 
SORT(ARRAY, SIZE, TYPE, COMPARE). Пример за използване 
на подобна макро функция: SORT(array, 5, int, >). Хубаво 
е да се преизползва SWAP макро функцията от задача 5. 
Когато дефинирате макрото за да се чете по лесно кодът, 
можете да слагата “\” за да направите макрото на няколко реда*/
#include <stdio.h>
#define SIZE 5
#define SWAP(A, B, TYPE) { \
    TYPE temp = A; \
    A = B; \
    B = temp; \
}
#define SORT(ARRAY, SIZE, TYPE, COMPARE) { \
    for (int i = 0; i < SIZE; i++) { \
        for (int j = 0; j < SIZE - i - 1; j++) { \
            if (ARRAY[j] COMPARE ARRAY[j + 1]) { \
                SWAP(ARRAY[j], ARRAY[j + 1], TYPE); \
            } \
        } \
    } \
}
int main() {
    int arr[SIZE] = {3, 2, 4, 1, 5};
    SORT(arr, SIZE, int, <);
    printf("След сортиране: ");
    for (int i = 0; i < SIZE; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}
