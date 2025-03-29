// Your code here...
#include <stdio.h>
int main(){
    int a,arr[100],b,arr2[100];
    scanf("%d",&a);
    for(int i=0;i<a;i++){
        scanf("%d\n",&arr[i]);
    }
    scanf("%d",&b);
    int index = 0;
    for(int i=a-b;i<a;i++){
        arr2[index] = arr[i];
        index++;
    }
    for(int i=0;i<b;i++){
        arr2[index] = arr[i];
        index++;
    }
    for(int i=0;i<a;i++){
        printf("%d",arr2[i]);
    }
    return 0;
}