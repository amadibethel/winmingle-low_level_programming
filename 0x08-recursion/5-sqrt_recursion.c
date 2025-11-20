#include "main.h"

int find_sqrt(int n, int guess)
{
    if (guess * guess == n)
        return (guess);

    if (guess * guess > n)
        return (-1);

    return (find_sqrt(n, guess + 1));
}

int _sqrt_recursion(int n)
{
    if (n < 0)
        return (-1);

    return (find_sqrt(n, 0));
}
