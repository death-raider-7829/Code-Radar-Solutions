// Your code here...

#include<stdio.h>

int print(int arr[],int n){
    for(int i=0;i<n;i++){
        printf("%d\n",arr[i]);
    }
}

int rot(int arr[], int n, int k){
    int a[n];
    k=k%n;
    for(int i=n-k-1,j=0;i<n;i++,j++){
        a[j]=arr[i];
    }
    for(int i=0;i<n-k-1;i++){
        a[i+k]=arr[i];
    }
    return print(a,n);
}

int main(){
    int n,k;
    scanf("%d",&n);
    scanf("%d",&k);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",arr[i]);
    }
    printf("%d", rot(arr,n,k));
}