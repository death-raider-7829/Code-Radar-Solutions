#include<stdio.h>

int mami(int arr[],int n){
    int max=arr[0],min=arr[0];
        for(int i=0;i<n;i++){
            if(max<arr[i]){
                max=arr[i];
            }
        }
        for(int j=0;j<n;j++){
            if(min>arr[j]){
                min=arr[j];
            }
        }
    return max,min;
}


int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("%d %d",mami(arr,n));
}