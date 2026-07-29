#include <stdio.h>
int main()
{
    double days;
    printf("enter days: ");
    scanf("%lf", &days);

    printf("days %.2lf to years %.2lf\n", days, (days / 365));
    printf("days %.2lf to weeks %.2lf", days, (days / 7));

    return 0;
}