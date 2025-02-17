#ifndef SAFE_INT_H_
#define SAFE_INT_H_
typedef struct {
    int value;
    int errorflag;
} SafeResult;
SafeResult safeadd(int a, int b);
SafeResult safesubtract(int a, int b);
SafeResult safemultiply(int a, int b);
SafeResult safedivide(int a, int b);
SafeResult safestrtoint(const char *str);
#endif