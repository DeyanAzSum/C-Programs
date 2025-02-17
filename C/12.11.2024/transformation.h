#ifndef TRANSFORMATION_H_
#define TRANSFORMATION_H_
typedef struct 
{
    long result;
    char error[100];
}transformation;
transformation otstrvint(char str[]);
#endif