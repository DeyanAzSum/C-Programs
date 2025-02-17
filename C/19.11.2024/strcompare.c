#include <stdio.h>
#include <stdlib.h>
#include "mystrings.h"
int main(int argc, char *argv[]) {
    if (argc >= 3) {
        printf("Trqbva da se podadut samo dva niza\n");
        return 1;
    }
    int status = strcompare(argv[1], argv[2]);
    if (status == 0) {
        printf("Dvata niza sa ednakvi\n");
    } else if (status == -1) {
        printf("Purviqt niz e po-maluk ot vtoriq\n");
    } else {
        printf("Purviqt niz e po-golqm ot vtoriq\n");
    }

    return 0;
}
