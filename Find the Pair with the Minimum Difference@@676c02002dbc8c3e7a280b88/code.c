// Your code here...
#include <stdio.h>
int main(){
    int a,arr[100];
    scanf("%d",&a);
    for(int i=0;i<a;i++){
        scanf("%d",&arr[i]);
    }
    int min = 1000,min1 = 0,min2 = 0;
    for(int i=0;i<a;i++){
        for(int j=0;j<a;j++){
            if(i!=j){
                a = arr[i];
                b = arr[j];
                if(a>b && (a-b) < min){
                    min = a-b;
                    min1 = b;
                    min2 = a;
                }
                if(b>a && (b-a) < min){
                    min = b-a;
                    min1 = a;
                    min2 = b;
                }
            }
        }
    }
    printf("%d %d",min1,min2);
    return 0;
}