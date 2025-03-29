// Your code here...
#include <stdio.h>
int main(){
    int a,arr[100];
    scanf("%d",&a);
    for(int i=0;i<a;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<a;i++){
        for(int j=0;j<a;j++){
            if(i!=j){
                printf("%d ",arr[i]-arr[j]);
            }
        }
    }
    // printf("%d %d",min1,min2);
    return 0;
}