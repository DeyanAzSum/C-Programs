#include <stdio.h>
#include <math.h>
void square(long arr[], int size) {
    for (int i = 0; i < size; i++) {
        arr[i] = pow(arr[i], 4);
    }
}
int main() {
    long arr[] = {1, 2, 3, 4, 5};
    int size = 5;
    square(arr, size);
    for (int i = 0; i < size; i++) {
        printf("%ld ", arr[i]);
    }
    return 0;
}
// gcc -c zadacha4.c -o zadacha4.o
// ar rcs libzadacha4.a zadacha4.o
// gcc usepow.c -lm -o usepow.exe