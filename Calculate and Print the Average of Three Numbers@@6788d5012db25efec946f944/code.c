#include <stdio.h>

int main() {
    float a,b,c,sum;
    float avg;
    scanf("%f %f %f",&a,&b,&c);
    sum=a+b+c;
    avg=sum/3;
    printf("Average: %f",avg);
    return 0;
}