// Your code here...
#include<stdio.h>

int main(){
    long int a;
    scanf("%ld",&a);
    a=a<<1;
    printf("%s",(a%2==0)?"Not Set":"Set");
}