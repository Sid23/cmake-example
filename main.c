#include <stdio.h>
#include "math_ops.h"

int main(void)
{
    float f1;
    int a, b, n;
    float (*fn)(float, float);

    printf("Testing library version: %s\n", get_version());
    a = 2; b = 3; n = 18;
    printf("a = %d; b = %d;\n", a, b);

    swap(&a, &b);
    printf("[After Swap]: a = %d b = %d\n", a, b);

    printf("[sum(a, b)]: %d\n", sum(a, b));
    f1 = -1.03;
    printf("[square_root(%f)]: %f\n", f1, square_root(f1));
   
    fn = magic(n);
    printf("[magic(%d)]: %f\n", n, (*fn)(2.0, 3.0));

    printf("Good Bye !!\n");

    return 0;
}