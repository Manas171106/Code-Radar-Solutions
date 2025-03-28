// Your code here...
#include <stdio.h>
int main(){
    int a,arr[100],freq[100];
    scanf("%d",&a);
    for(int i=0;i<a;i++){
        scanf("%d ",&arr[i]);
    }
    int ind = 0;
    int count;
    for(int j=0;j<a;j++){
        count = 0;
        for(int k=0;k<a;k++){
            if(arr[j] == arr[k]){
                count ++;
            }
        }
        freq[ind] = count;
        ind++;
    }
    for(int i=0;i<a;i++){
        printf("%d %d\n",arr[i],freq[i]);
    }
    return 0;
}