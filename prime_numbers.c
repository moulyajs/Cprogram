#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
int main()
{
    int p, i;
    int primes[50] = {0};
    int primeindex = 2;
    bool isprime;
    // hardcode prime numbers
    primes[0] = 2;
    primes[1] = 3;
    for (p = 5; p <= 100; p = p + 2)
    {
        isprime = true;
        for (i = 1; isprime && p / primes[i] >= primes[i]; ++i)
            if (p % primes[i] == 0)
                isprime = false;
        if (isprime == true)
        {
            primes[primeindex] = p;
            ++primeindex;
        }
    }
    for (i = 0; i < primeindex; ++i)
        printf("%d ", primes[i]);
    printf("\n");
    return 0;
}