// Your code here...
#include<stdio.h>

int main(){
    int a;
    scanf("%d",&a);
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