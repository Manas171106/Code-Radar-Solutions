// Your code here...
#include <stdio.h>
int main(){
    int a,arr[100],freq[100];
    scanf("%d",&a);
    for(int i=0;i<a;i++){
        scanf("%d ",&arr[i]);
    }
    int uarr[100],uindex = 0,duplicate;
    for(int i=0;i<a;i++){
        duplicate = 0;
        for(int j=0;j<uindex;j++){
            if(arr[i] == uarr[j]){
                duplicate = 1;
                break;
            }
        }
        if(!duplicate){
            uarr[uindex] = arr[i];
            uindex++;
        }
    }
    int ind = 0;
    int count;
    for(int j=0;j<a;j++){
        count = 0;
        for(int k=0;k<a;k++){
            if(uarr[j] == arr[k]){
                count ++;
            }
        }
        freq[ind] = count;
        ind++;
    }
    for(int i=0;i<a;i++){
        printf("%d %d\n",uarr[i],freq[i]);
    }
    return 0;
}