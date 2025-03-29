// Your code here...
#include <stdio.h>
int main(){
    int a,arr[100],k;
    scanf("%d",&a);
    for(int i=0;i<a;i++){
        scanf("%d ",&arr[i]);
    }
    scanf("%d",&k);
    for(int i=a-k;i<a;i++){
        printf("%d ",arr[i]);
    }
    for(int i=0;i<a-k;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}