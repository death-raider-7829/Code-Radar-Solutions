// Your code here...
#include<stdio.h>

void peak(int arr[],int n){
    for(int i=;i<n-1;i++){
        if(arr[i]>arr[i-1] && arr[i]>arr[i+1]){
            printf("%d",arr[i]);
            break;
        }
    }
}

int main(){
    int n;
    scanf("%d",&n);
    int arr[n];

    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    peak(arr,n);
}