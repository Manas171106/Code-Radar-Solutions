// Your code here...
#include <stdio.h>
int main(){
    int a,b,arr[100];
    scanf("%d",&a);
    for(int i=0;i<a;i++){
        scanf("%d",&arr[i]);
    }
    scanf("%d",&b);
    int printed = 0;
    
    for(int i=0;i<a;i++){
        for(int j=i+1;j<a;j++){
            if(arr[i] + arr[j] == b){
                if (printed == 0) {
                    printf("%d %d\n", arr[i], arr[j]);
                    printed = 1;
                }
            }
        }
    }
    return 0;
}