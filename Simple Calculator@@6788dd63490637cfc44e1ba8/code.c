#include <stdio.h>
int main(){
    int a,b,result;
    char c;
    scanf("%d %d %c",&a,&b,&c);
    switch(c){
        case '+':
            result = a+b;
            printf("%d",result);
            break;
        case '-':
            result = a-b;
            printf("%d",result);
            break;
        case '/':
            result = a/b;
            printf("%d",result);
            break;
        case '*':
            result = a*b;
            printf("%d",result);
            break;
        default:
            printf("error");
            break;
    }
}