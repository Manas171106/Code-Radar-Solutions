// Your code here...
#include <stdio.h>
int main(){
    int a,arr[100];
    scanf("%d",&a);
    for(int i=0;i<a;i++){
        scanf("%d",&arr[i]);
    }
    int diff = 0,min1,min2;
    for(int i=0;i<a;i++){
        for(int j=0;j<a;j++){
            if(i!=j){
                if(arr[i]-arr[j] > 0 && diff > arr[i]-arr[j]){
                    min1 = arr[j];
                    min2 = arr[i];
                }
                if(arr[j] - arr[i] > 0 && diff > arr[j]-arr[i]){
                    min1 = arr[i];
                    min2 = arr[j];
                }
            }
        }
    }
    printf("%d %d",min1,min2);
    return 0;
}