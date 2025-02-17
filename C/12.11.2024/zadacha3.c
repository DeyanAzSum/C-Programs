#include <stdio.h>
#include "transformation.h"
int main()
{
    char input1[] = "123";
    char input2[] = "5yu9";
    char input3[] = "-321";
    transformation correct = otstrvint(input1);
    printf("Result: %ld\nError: %s", correct.result, correct.error);
    transformation incorrect = otstrvint(input2);
    printf("Result: %ld\nError: %s", incorrect.result, incorrect.error);
    transformation correct = otstrvint(input3);
    printf("Result: %ld\nError: %s", incorrect.result, incorrect.error);
}