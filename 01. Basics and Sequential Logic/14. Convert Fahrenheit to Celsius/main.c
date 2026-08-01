#include <stdio.h>
int main()
{
    float f = 20;
    printf("Fahrenheit = %.2f to Celsius = %.2f", f, (f - 32) * 5 / 9);
    return 0;
}