// Your code here...
#include <stdio.h>
int main(){
    int a,b,arr[100];
    scanf("%d",&a);
    for(int i=0;i<a;i++){
        scanf("%d",&arr[i]);
    }
    scanf("%d",&b);
    for(int i=0;i<a;i++){
        for(int j=i+1;j<a;j++){
            if(arr[i] + arr[j] == b){
                printf("%d %d\n",arr[i],arr[j]);
            }
        }
    }
    return 0;
}