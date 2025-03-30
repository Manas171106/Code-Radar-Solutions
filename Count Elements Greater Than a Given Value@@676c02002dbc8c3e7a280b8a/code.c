// Your code here...
#include <stdio.h>
int main(){
    int a,b,arr[100],count=0;
    scanf("%d %d",&a,&b);
    for(int i=0;i<a;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<a;i++){
        if(arr[i] > b){
            count++;
        }
    }
    printf("%d",count);
    return 0;
}