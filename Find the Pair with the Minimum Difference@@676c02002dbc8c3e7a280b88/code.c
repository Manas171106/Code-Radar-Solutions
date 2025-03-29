// Your code here...
#include <stdio.h>
#include <limits.h>
int main(){
    int a,arr[100];
    scanf("%d",&a);
    for(int i=0;i<a;i++){
        scanf("%d",&arr[i]);
    }
    int diff,min1=0,min2=0,mindiff = INT_MAX;
    for(int i=0;i<a;i++){
        for(int j=0;j<a;j++){
            if(i!=j){
                diff = arr[i] - arr[j];
                if(diff < 0){
                    diff = -diff;
                }
                if(diff<mindiff){
                    mindiff = diff;
                    min1 = arr[i];
                    min2 = arr[j];
                }
            }
        }
    }
    if(min1 > min2){
        printf("%d %d",min2,min1);
    }
    else{
        printf("%d %d",min1,min2);
    }
    return 0;
}