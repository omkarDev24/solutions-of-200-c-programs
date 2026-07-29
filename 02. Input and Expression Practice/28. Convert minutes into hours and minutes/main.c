#include<stdio.h>
int main(){
    double min;
    printf("enter min: ");
    scanf("%lf",&min);
    printf("min %.2lf to hours %.2lf",min,(min/60));
    return 0;
}