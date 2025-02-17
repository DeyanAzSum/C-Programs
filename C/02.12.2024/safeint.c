#include "safeint.h"
#include "util.h"
#include <limits.h>
#include <stdlib.h>
SafeResult safeadd(int a, int b) {
    SafeResult result;
    result.value = 0;
    result.errorflag = 0;
    if ((b > 0 && a > INT_MAX - b) || (b < 0 && a < INT_MIN + b)) {
        result.errorflag = 1;
    } else {
        result.value = a + b;
    }
    return result;
}
SafeResult safesubtract(int a, int b) {
    SafeResult result;
    result.value = 0;
    result.errorflag = 0;
    if ((b < 0 && a > INT_MAX + b) || (b > 0 && a < INT_MIN + b)) {
        result.errorflag = 1;
    } else {
        result.value = a - b;
    }
    return result;
}
SafeResult safemultiply(int a, int b) {
    SafeResult result;
    result.value = 0;
    result.errorflag = 0;
    if (a > INT_MAX / b || a < INT_MIN / b) {
        result.errorflag = 1;
    } else {
        result.value = a * b;
    }
    return result;
}
SafeResult safedivide(int a, int b) {
    SafeResult result;
    result.value = 0;
    result.errorflag = 0;
    if (b == 0) {
        result.errorflag = 1;
    } else {
        result.value = a / b;
    }
    return result;
}
SafeResult safestrtoint(const char* str) {
    SafeResult result;
    result.value = 0;
    result.errorflag = 0;
    int i = atoi(str);
    if (i == 0 && str[0] != '0') {
        result.errorflag = 1;
    } else {
       if (i > INT_MAX || i < INT_MIN) {
            result.errorflag = 1;
        } else {
            result.value = i;
        }
    }
    return result;
}