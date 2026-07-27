#include <stdio.h>
int main()
{
    int n1, n2;
    printf("enter two numbers:");
    scanf("%d %d", &n1, &n2);
    printf("sum : %d + %d = %d \n", n1, n2, (n1 + n2));
    printf("difference : %d - %d = %d \n", n1, n2, (n1 - n2));
    printf("product : %d * %d = %d \n", n1, n2, (n1 * n2));
    printf("quotient : %d / %d = %d \n", n1, n2, (n1 / n2));
    
    return 0;
}