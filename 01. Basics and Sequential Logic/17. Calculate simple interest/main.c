#include <stdio.h>
int main()
{
    double Principal = 100000, Rate = 10, Time = 5, totalR;

    printf("Principal amount = %.2lf\n", Principal);

    totalR = (Principal * Rate * Time) / 100;

    printf("interest = %.2lf\n", totalR);
    printf("total amount = %.2lf\n", Principal + totalR);

    return 0;
}