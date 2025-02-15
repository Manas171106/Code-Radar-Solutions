// Your code here...
#include <stdio.h>
int main(){
    int a,rem=0;
    scanf("%d",&a);
    while(a>0){
    rem = a%2;
    a = a/10;
    }
    if(rem == 1){
        printf("Set");
    }else{
        printf("Not Set");
    }
}