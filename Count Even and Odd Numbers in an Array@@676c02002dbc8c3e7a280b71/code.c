// Your code here...
#include <stdio.h>
int main(){
    int a,arr[100];
    scanf("%d\n",&a);

for(int i=0;i<a;i++){
    scanf("%d ",&arr[i]);
}
    int even = 0,odd = 0;
for(int j=0;j<a;j++){
     if(arr[j]%2==0){
        even++;
    }
    else{
        odd++;
    }
}
printf("%d %d",even,odd);
return 0;
}