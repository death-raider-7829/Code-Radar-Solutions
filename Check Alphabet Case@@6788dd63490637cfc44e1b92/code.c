// Your code here...
#include<stdio.h>

int main(){
    char a;
    scanf("%c",&a);
    a=(int)a;
    if(a>64 && a<93){
        printf("Uppercase");
    }
    else if(a>95 && a<122){
        printf("Lowercase");
    }
    else{
        printf("Not an alphabet");
    }
}
