// Your code here...
#include<stdio.h>

void peak(int arr[],int n){
    for(int i=1;i<n;i++){
        if(arr[i]>arr[i-1] && arr[i]>arr[i+1] && i<n-1){
            printf("%d",arr[i]);
            break;
        }
        else if(i==n-1){
            printf("%d",arr[n-1]);
            break;
        }
        else{
            printf("-1");
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