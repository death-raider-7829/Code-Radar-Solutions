// Your code here...
#include<stdio.h>

void leap(int a){
    if(a%100==0){
        a=a/100;
        if(a%4==0){
            printf("Leap Year");
        }
        else{
            printf("Not a Leap Year");
        }
    }
    else if(a%4==0){
        printf("Leap Year");
    }
    else{
        printf("Not a Leap Year");
    }
}

int main(){
    int year;
    scanf("%d",&year);
    leap(year);
}