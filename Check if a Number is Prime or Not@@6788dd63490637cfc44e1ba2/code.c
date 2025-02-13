#include <stdio.h>
#include <stdbool.h>
int main(){
    int a;
    scanf("%d",&a);
    bool b = true;
    if(a==2){
        printf("Prime");
    }else if(a>2){
        for(int i=2;i<a;i++){
            if(a%i==0){
                b = false;
            }
        }
        if(b){
            printf("Prime");
        }else{
            printf("Not Prime");
        }
    }else{
        printf("Not Prime");
    }
    return 0;
}