// Your code here...
#include <stdio.h>
int main(){
int a,arr[100];
scanf("%d",&a);
for(int i=0;i<a;i++){
    scanf("%d ",&arr[i]);
}
int max = arr[0],min = arr[0];
for(int j=1;j<a;j++){
    if(max < arr[j]){
        max = arr[j];
    }
    if(min > arr[j]){
        min  = arr[j];
    }
}
printf("%d %d ",min,max);

return 0;
}