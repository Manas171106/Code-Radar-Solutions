// Your code here...
#include <stdio.h>
int main(){
    int a,arr[100];
    scanf("%d",&a);
    for(int i=0;i<a;i++){
        scanf("%d\n",&arr[i]);
    }
    int res;
    for(int j=1;j<a-1;j++){
        if(arr[j] > arr[j-1] && arr[j] > arr[j+1]){
            res = arr[j];
        }
    }
    printf("%d",res);
    return 0;
}