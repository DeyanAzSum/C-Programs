#include <stdio.h>
#include <math.h>
#include <string.h>
#include "transformation.h"
transformation otstrvint(char error[])
{
    transformation transform;
    int i = 0;
    int otric = 1;
    transform.result = 0;
    transform.error[0] = 0;
    if(error[i] == '-'){
        otric = -1;
        i++;
    }
    else if(error[i] == '+'){
        i++;
    } 
    while(error[i] != 0)
    {
        if(error[i] >= '0' && error[i] <= '9')
        {
            transform.result = transform.result * 10 + (error[i] - '0');
        }
        else
        {
            strcpy(transform.error, "Greshen string");
            transform.result = 0;
            return transform;
        }
        i++;
    }

    transform.result = transform.result * otric;

    return transform;
}