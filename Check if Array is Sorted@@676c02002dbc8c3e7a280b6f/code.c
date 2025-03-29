// Your code here...
#include <stdio.h>
int main(){
    int a,arr[100];
    scanf("%d",&a);
    for(int i=0;i<a;i++){
        scanf("%d",&arr[i]);
    }
    check = 0;
    for(int i=0;i<a;i++){
        if(!(arr[i] <= arr[i+1])){
            check = -1;
        }
    }
    if(check == -1){
        printf("Not Sorted");
    }
    else{
        printf("Sorted");
    }
    return 0;
}