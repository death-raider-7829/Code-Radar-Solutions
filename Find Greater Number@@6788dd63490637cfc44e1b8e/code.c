// Your code here...
#include<stdio.h>

void mami(int *a,int *b){
    if(*a>*b){
        printf("%d",*a);
    }
    else if(*b>*a){
        printf("%d",*b);
    }
    else{
        printf("%d",*a);
    }
}

int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    mami(&a,&b);
}