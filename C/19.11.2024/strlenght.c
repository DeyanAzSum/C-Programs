#include <stdio.h>
#include <stdlib.h>
#include "mystrings.h"
int main(int argc, char *argv[]) {
    if (argc >= 2) {
        printf("trqbva da se podade samo edin niz\n");
        return 1;
    }
    printf("Duljinata na niza e:%d\n", strlength(argv[1]));
    return 0;
}