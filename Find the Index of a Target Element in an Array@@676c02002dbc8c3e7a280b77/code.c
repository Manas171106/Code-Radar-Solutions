// Your code here...
#include <stdio.h>
int main(){
    int a,arr[100],element;
    scanf("%d",&a);
    for(int i=0;i<a;i++){
        scanf("%d",&arr[i]);
    }
    scanf("%d",&element);
    int index = -1;
    for(int i=a-1;i>=0;i--){
        if(element == arr[i]){
            index = i;
        }
    }
    printf("%d",index);
}