// Your code here...
#include <stdio.h>
int main(){
    int a,arr[100],count[100];
    scanf("%d",&a);
    for(int i=0;i<a;i++){
        scanf("%d",&arr[i]);
    }
    int duplicate,uarr[100],uind = 0;
    for(int i=0;i<a;i++){
        duplicate = 0;
        for(int j=0;j<uind;j++){
            if(uarr[i] == arr[j]){
                duplicate = 1;
            }
        }
        if(!duplicate){
            uarr[uind] = arr[i];
            uind++;
        }
    }
    
    int index=0,c;
    for(int i=0;i<uind;i++){
        c = 0;
        for(int j=0;j<a;j++){
            if(uarr[i] == arr[j]){
                c++;
            }
        }
        count[index] = c;
        index++;
    }
    int max = count[0],maxInd = 0;
    for(int i=0;i<a;i++){
        if(max < count[i]){
            max = count[i];
            maxInd = i;
        }
    }
    int countmax = 0;
    for(int i=0;i<a;i++){
        if(max == count[i]){
            countmax++;
        }
    }
    if(countmax==1){
    printf("%d",uarr[maxInd]);
    }else{
        printf("-1");
    }
    return 0;
}