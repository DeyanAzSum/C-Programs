#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "mystrings.h"
#define MAX_LEN 50
int main(int argc, char *argv[]) {
    if (argc >= 3) {
        printf("Trqbva da se vuvedut samo dva niza\n");
        return 1;
    }
    if (strlen(argv[1]) > MAX_LEN || strlen(argv[2]) > MAX_LEN) {
        printf("Nizut e po-dulug ot 50\n");
        return 1;
    }
    strconcat(argv[1], argv[2]);
    printf("Rezultat ot cocatenaciqta: %s\n", argv[1]);
    return 0;
}
