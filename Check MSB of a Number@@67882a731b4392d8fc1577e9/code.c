// Your code here...
#include<stdio.h>

int main(){
    long int a;
    scanf("%d",&a);
    a<<0;
    printf("%s",(a%2==0)?"Not Set":"Set");
}