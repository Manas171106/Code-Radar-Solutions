// Your code here...
#include <stdio.h>
int main(){
    int a,arr[100],sum = 0,avg;
    scanf("%d",&a);
    for(int i=0;i<a;i++){
        scanf("%d",&arr[i]);
        sum += arr[i];
    }
    avg = sum/a;
    printf("%d",avg);
    return 0;
}