// Your code here...
#include <stdio.h>
int main(){
    int a,arr[100],max=0,index=0;
    scanf("%d",&a);
    for(int i=0;i<a;i++){
        scanf("%d",&arr[i]);
        if(arr[i]>max){
            max = arr[i];
            index = i;
        }
    }
    arr[index] = -1;
    int max2 = -1;
    int number2 = 0;
    for(int i=0;i<a;i++){
        if(max2 < arr[i]){
            max2 = arr[i];
            number2 = 1;
        }
    }
   if (!number2) {
        printf("-1\n");
    } else {
        printf("%d\n", max2);
    }
    return 0;
}