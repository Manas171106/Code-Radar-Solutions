// Your code here...
#include <stdio.h>
int main(){
    int a,b=1;
    scanf("%d",&a);
    for(int i=1;i<=a;i++){
        for(int j=a;j>=i;j--){
            printf(" ");
        }
        for(int i=1;i<=b;i++){
            printf("*");
        }
        b+=2;
        printf("\n");
    }
}