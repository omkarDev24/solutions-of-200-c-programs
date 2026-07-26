#include <stdio.h>
int main()
{
    int a = 5, b = 10, temp;
    printf("before a = %d and b = %d \n", a, b);
    temp = a; // Store a in temp.
    a = b;    // Copy b into a.
    b = temp; // Copy temp into b.
    printf("after a = %d and b = %d", a, b);
    return 0;
}