// Your code here...
#include <stdio.h>
int main(){
    int a,arr[100];
    scanf("%d",&a);
    for(int i=0;i<a;i++){
        scanf("%d ",&arr[i]);
    }
    int count = 0,check;
    for(int i=0;i<a;i++){
        check = -1;
        for(int j=2;j<arr[i];j++){
            if(arr[i]%j==0){
                check = 0;
            }
        }
        if(check == -1){
            count++;
            printf("%d\n",arr[i]);
        }
    }
    printf("%d",count);
    return 0;
}