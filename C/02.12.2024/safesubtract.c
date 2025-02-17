#include <stdio.h>
#include <stdlib.h>
#include "safeint.h"
#include "util.h"
int main(int argc, char *argv[]) {
    if (argc > 2) {
        printmessage("Trqbvat samo dva argumenta.");
        return 1;
    }
    SafeResult result = safestrtoint(argv[1]);
    if (result.errorflag) {
        printmessage("Purvoto chislo e po-golqmo ot dopustimoto za int.");
        return 1;
    }
    int a = result.value;
    result = safestrtoint(argv[2]);
    if (result.errorflag) {
        printmessage("Purvoto chislo e po-golqmo ot dopustimoto za int.");
        return 1;
    }
        int b = result.value;
    result = safesubtract(a, b);
    if (result.errorflag) {
        printmessage("Prepulvane.");
        return 1;
    }
    printf("Razlikata e: %d\n", result.value);
    return 0;
}