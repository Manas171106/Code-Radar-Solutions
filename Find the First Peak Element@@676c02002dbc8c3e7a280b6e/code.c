// Your code here...
#include <stdio.h>
int main(){
    int a,arr[100];
    scanf("%d",&a);
    for(int i=0;i<a;i++){
        scanf("%d\n",&arr[i]);
    }
    check = -1;
    int res[10],index=0;
    if(arr[0] > arr[1]){
        res[index] = arr[1];
        index++;
        check++;
    }
    for(int j=1;j<a-1;j++){
        if(arr[j] > arr[j-1] && arr[j] > arr[j+1]){
            res[index] = arr[j];
            index++;
            check++;
        }
    }
    if(arr[a-2] < arr[a-1]){
        res[index] = arr[a-1];
        index++;
        check++;
    }
    if(check == -1){
        printf("%d\n",check);
    }else{
printf("%d",res[0]);
    }
    
    return 0;
}