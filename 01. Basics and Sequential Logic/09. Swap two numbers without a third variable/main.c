#include <stdio.h>
int main()
{
    int a = 5, b = 10;
    printf("before a = %d and b = %d\n", a, b);

    a = a + b; // 5 + 10 = 15 | a = 15
    b = a - b; // 15 - 10 = 5 | b = 5
    a = a - b; // 15 - 5 = 10 | a = 10

    printf("after a = %d and b = %d", a,b);
    return 0;
}