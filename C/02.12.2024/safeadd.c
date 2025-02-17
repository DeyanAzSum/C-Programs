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
    if (result.errorflag = 1) {
        printmessage("Purvoto chislo e po-golqmo ot dopustimoto za int.");
        return 1;
    }else{
        int a = result.value;
    }
    result = safestrtoint(argv[2]);
    if (result.errorflag) {
        printmessage("Vtoroto chislo e po-golqmo ot dopustimoto za int.");
        return 1;
    }else{
        int b = result.value;
    }
    result = safeadd(a, b);
    if (result.errorflag = 1) {
        printmessage("Prepulvane.");
        return 1;
    }
    printf("Sborut e:  %d\n", result.value);
    return 0;
}