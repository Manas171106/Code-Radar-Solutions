// Your code here...
#include <stdio.h>
#include <limits.h>
int main(){
    int a,arr[100],count=0;
    scanf("%d",&a);
    for(int i=0;i<a;i++){
        scanf("%d",&arr[i]);
    }
    int max = INT_MIN;
    for(int i=0;i<a;i++){
        if(arr[i] > max && arr[i]%2==0){
            max = arr[i];
            count++;
        }
    }
    if(count == 0){
        printf("-1");
    }else{
        printf("%d",max);
    }
    return 0;
}