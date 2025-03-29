// Your code here...
#include <stdio.h>
int main(){
    int a,arr[100],max=0,index=0;
    scanf("%d",&a);
    for(int i=0;i<a;i++){
        scanf("%d",&arr[i]);
        if(arr[i]>max){
            max = arr[i];
            index = i;
        }
    }
    arr[index] = 0;
    int max2 = 0;
    for(int i=0;i<a;i++){
        if(max2 < arr[i]){
            max2 = arr[i];
        }else if(arr[i] == max2 ){
            max2 = -1;
        }
    }
    printf("%d",max2);
    return 0;
}