#indlude <stdio.h>
int main(){
    char a;
    scanf("%c",&a);
    if(a>='a' && a<='z'){
        if(a=='a' || a=='i' || a=='e' || a=='o' || a=='u'){
            printf("Vowel");
        }else{
            printf("Consonant");
        }
    }
    else if(a>=0 && a<=9){
        printf("Digit");
    }
    else{
        printf("Special character");
    }
    return 0;
}