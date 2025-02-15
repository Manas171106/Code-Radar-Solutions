// Your code here...
#include <stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    int rem = a%2;
    if(rem == 1){
        printf("Set");
    }else{
        printf("Not Set");
    }
}