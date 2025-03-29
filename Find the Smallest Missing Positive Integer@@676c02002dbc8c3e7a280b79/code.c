// Your code here...
#include <stdio.h>
int main(){
    int a,arr[100];
    scanf("%d",&a);
    for(int i=0;i<a;i++){
        scanf("%d",&arr[i]);
    }
    int min = arr[0],max = arr[0];
    for(int i=1;i<a;i++){
        if(arr[i] > max){
            max = arr[i];
        }
        if(arr[i] < min){
            min = arr[i];
        }
    }
    int check,n;
    for(int i=min;i<=max;i++){
        check = 0;
        for(int j=0;j<a;j++){
            if(i==arr[j]){
                check = 1;
            }
        }
        if(check == 0){
            n = i;
        }
    }
    printf("%d",n);
}