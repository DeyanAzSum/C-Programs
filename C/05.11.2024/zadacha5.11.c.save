/*Дефинирайте макро, което се казва DEBUG.
Направете, функция която да сортира масив
възходящо и да намира сумата на елементите,
които се намират на индекси, които се делят
с точност на 3 и да я принтира на екрана.
Направете функцията така, че ако DEBUG макрото
е дефинирано, на екрана да се принтира сортирания
масив и елементите, които се намират на индекси,
които се делят с точност на 3 (като допълнение на сумата)*/
#include <stdio.h>
#define SIZE 9
#define DEBUG (arr, SIZE);\
 for (int i = 0; i < SIZE; i++){\
    for (int j = 0; j < SIZE - i - 1; j++){\
        if (arr[j] > arr[j + 1]){\
            int temp = arr[j];\
            arr[j] = arr[j + 1];\
            arr[j + 1] = temp;\
        }\
    }\
}
int main(){
    int sum = 0;
    int arr[SIZE] = {2, 3, 5, 1, 4, 7, 8, 6, 9};
    #ifdef DEBUG
    DEBUG(arr, SIZE);
    for(int k = 0; k < SIZE; k++){
        printf("%d\n", arr[k]);
        }
    #endif
    #ifdef DEBUG
    DEBUG(arr, SIZE);
    for(int k = 0; k < SIZE; k++){
        if (k  % 3 == 0 && k != 0)
        {
            sum = sum + arr[k];
        }
        }
        printf("sum = %d", sum);
    #endif
    return 0;
}
