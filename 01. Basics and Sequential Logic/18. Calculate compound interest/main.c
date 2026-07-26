// note - this is for yearly compound interest
#include <stdio.h>

int main()
{
    double p = 10000, r = 10, a, ci;

    a = p * (1 + r / 100) * (1 + r / 100);
    ci = a - p;

    printf("compound interest = %.2lf\n", ci);
    printf("total amount = %.2lf", a);

    return 0;
}
