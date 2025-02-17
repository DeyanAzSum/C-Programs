#include <stdio.h>
#include "quadraticroots.h"
void printResult(QuadraticRootsResult result) {
    if (result.nqmarealnikoreni) {
        printf("Nqma realni koreni.\n");
    } else {
        printf("Koreni: x1 = %.5Lf, x2 = %.5Lf\n", result.x1, result.x2);
    }
}
int main() {
    int x, y, z;
    float q, w, e;
    long double r, t, u;
    printf("Stoinost na promenlivite v int: ");
    scanf("%d", &x);
    scanf("%d", &y);
    scanf("%d", &z);
    printf("Stoinost na promenlivite v float: ");
    scanf("%d", &q);
    scanf("%d", &w);
    scanf("%d", &e);
    printf("Stoinost na promenlivite v long double: ");
    scanf("%d", &r);
    scanf("%d", &t);
    scanf("%d", &u);
    printf("Korenite s int stoinostite\n");
    QuadraticRootsResult resultInt = findroots(x, y, z);
    printResult(resultInt);
    printf("\nKorenite s float stoinostite:\n");
    QuadraticRootsResult resultFloat = findroots(q, w, e);
    printResult(resultFloat);
    printf("\nKorenite s long doube stoinostite:\n");
    QuadraticRootsResult resultDouble = findroots(r, t, u);
    printResult(resultDouble);
    return 0;
}
