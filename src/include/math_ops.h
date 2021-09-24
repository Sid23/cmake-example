#ifndef MATH_OPS_H
#define MATH_OPS_H

int sum(int a, int b);
double square_root(double n);
void swap(int *a, int *b);

/* Return a function pointer to a function that thakes 2 arguments and return a floatr */
float (*magic(int n))(float, float);

const char *get_version();

#endif
