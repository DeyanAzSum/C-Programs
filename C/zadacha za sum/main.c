#include <stdio.h>
#include "sum.h"

int main() {
    int n = 5;
    int a = 4;
    int result = sumata(n, a);  // Извикваме функцията sumata с n и a
    printf("Сумата на %d и %d е: %d\n", n, a, result);  // Извеждаме резултата
    return 0;
}
