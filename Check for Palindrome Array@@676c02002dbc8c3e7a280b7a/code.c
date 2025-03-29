// Your code here...
#include <stdio.h>
int main(){
    int a,arr[100];
    scanf("%d",&a);
    for(int i=0;i<a;i++){
        scanf("%d",&arr[i]);
    }
    int parr[100],pind = 0;
    for(int i=1;i< (a/2)+2;i++){
        parr[pind] = i;
        pind++;
    }

    for(int i=0;i<a;i++){
        printf("%d",parr[i]);
    }
    return 0;
}