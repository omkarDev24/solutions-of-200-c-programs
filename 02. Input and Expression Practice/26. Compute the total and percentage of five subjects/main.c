#include <stdio.h>
int main()
{
    float s1, s2, s3, s4, s5;
    // enter the marks out of 20
    printf("enter the marks of the five subjects: ");
    scanf("%f %f %f %f %f", &s1, &s2, &s3, &s4, &s5);

    printf("your percentage is %.2f %.2f", (s1+s2+s3+s4+s5/100* 100),(s1+s2+s3+s4+s5));
    
    return 0;
}