// Your code here...
#include<stdio.h>
int sorted(int arr[], int n){
    int k=0;
    for(int i=0;i<n-1;i++){
        if(arr[i]<arr[i+1] || arr[i]==arr[i+1]){
            k++;
        }
    }
    if(k==n-1){
        printf("Sorted");
    }
    else{
        printf("Undorted");
    }
}

int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d", &arr[i]);
    }
    sorted(arr,n);
}