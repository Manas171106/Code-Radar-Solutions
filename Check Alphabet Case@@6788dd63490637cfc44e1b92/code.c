#include <stdio.h>
int main(){
    char a;
    scanf("%c",&a);
    char up = printf("%C",a);
    char low = printf("%c",a);
    if(a == up){
        printf("Uppercase");
    }else{
        printf("Lowercase");
    }
    return 0;
}