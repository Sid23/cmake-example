#include "math_ops.h"
#include "adder.h"

#include <stdlib.h>
#include <math.h>

static float fn0(float a, float b)
{
    if (a + b == 0)
    {
        return -1.0;
    }
    return (a * b) / (a + b);
}

static float fn1(float a, float b)
{
    if (a == b)
    {
        return 0.0;
    }
    return (a + b) / (a - b);
}

int sum(int a, int b)
{
    return adder_func(a, b);
}

double square_root(double n)
{
    if (n < 0)
    {
        return -1.0;
    }
    return sqrt(n);
}

void swap(int *a, int *b)
{
    if (a == NULL || b == NULL)
    {
        return;
    }
    int c;
    c = *a ^ *b;
    *a ^= c;
    *b ^= c;
    return;
}


/* Return a function pointer to a function that thakes 2 arguments and return a floatr */
float (*magic(int n))(float, float)
{
    if (n < 0)
    {
        return NULL;
    }
    if(n % 2 == 0)
    {
        return &fn0;
    }
    return &fn1;
}

/* Version is a definition passed to the compiler */
const char *get_version()
{
    return VERSION;
}
