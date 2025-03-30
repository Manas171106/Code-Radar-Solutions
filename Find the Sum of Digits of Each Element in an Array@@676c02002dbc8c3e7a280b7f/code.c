// Your code here...
#include <stdio.h>
int main(){
    int a,arr[100];
    scanf("%d",&a);
    for(int i=0;i<a;i++){
        scanf("%d",&arr[i]);
    }
    int sod[100],b,count,rem = 0;
    for(int i=0;i<a;i++){
        b = arr[i];
        count = 0;
        while(b>0){
            rem = b%10;
            count += rem;
            b = (b/10);
        }
        sod[i]=count;
    }
    for(int i=0;i<a;i++){
        printf("%d ",sod[i]);
    }
    return 0;
}