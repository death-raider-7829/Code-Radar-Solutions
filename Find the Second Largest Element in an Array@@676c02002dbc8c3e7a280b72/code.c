// Your code here...
#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int max=0,sec=0;
    for(int i=0;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    for(int i=0; i<n;i++){
        if(n==1){
            printf("-1");
        }
        if(arr[i]>sec && max>sec){
            sec=arr[i];
        }
    }
    printf("%d",sec);
}