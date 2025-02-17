#include "maths.h"
long factorial(int n) {
    int f = 1;
    do{
        f = f * n;
        n--;
}while(n > 0);
}
