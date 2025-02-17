// Your code here...
#include <stdio.h>

int main(){
    int a,b,n,i,j,k,l;
    scanf("%d",&n);
    for(a=0;a<n;a++){
        for(i=n-a;i>0;i--){
            printf(" ");
        }
        for(j=0;j<=a;j++){
            printf("* ");
            j++;
        }
        printf("\n");
    }
    for(a=0;a<n-2;a++){
        for(k=0;k<a;k++){
            printf(" ");
        }
        for(l=n-a;l>0;l--){
            printf("* ");
        }
        printf("\n");
    }
}