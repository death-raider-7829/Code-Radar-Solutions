// Your code here...
#include<stdio.h>

int main(){
    double f,a,d;
    scanf("%lf %lf %lf\n",&f,&a,&d);
    double k;
    k=(a+d+f)/3;
    printf("Average: %.2lf",k);
    return 0;
}