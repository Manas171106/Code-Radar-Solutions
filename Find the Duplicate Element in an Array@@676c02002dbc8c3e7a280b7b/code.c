// Your code here...
#include <stdio.h>
int main(){
    int a,arr[100],dup[100],index=0;
    scanf("%d",&a);
    for(int i=0;i<a;i++){
        scanf("%d ",&arr[i]);
    }
    for(int i=0;i<a;i++){
        for(int j=i+1;j<a;j++){
            if(arr[i] == arr[j]){
                dup[index] = arr[i];
                index++;
            }
        }
    }
    for(int i=0;i<index;i++){
        printf("%d",dup[i]);
    }
    return 0;
}