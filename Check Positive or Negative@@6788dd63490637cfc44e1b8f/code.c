// Your code here...
#include<stdio.h>

void papi(int *a){
    if(*a>0){
        printf("Positive");
    }
    else if(*a<0){
        printf("Negative");
    }
    else{
        printf("Zero");
    }
}

int main(){
    int a;
    scanf("%d",&a);
    papi(&a);
}