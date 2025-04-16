#include "math_utils.h"

int Factorial(int n) {
    if (n <= 1) return 1;
    return n * Factorial(n - 1);
}

bool IsBetween5And10(int value) {
    return value > 5 && value < 10;
}


int SubMethod(int n, int m)
{
    return n - m;
}