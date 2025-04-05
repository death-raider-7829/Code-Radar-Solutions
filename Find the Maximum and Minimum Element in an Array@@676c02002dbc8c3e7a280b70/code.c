#include<stdio.h>

void mami(int arr[],int n,int *max,int *min){
    *max=arr[0];*min=arr[0];
        for(int i=0;i<n;i++){
            if(*min<arr[i] || *min==arr[i]){
                *min=arr[i];
            }
        }
        for(int j=0;j<n;j++){
            if(*max>arr[j] || *max==arr[j]){
                *max=arr[j];
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
    int max,min;
    mami(arr,n,&max,&min);
    printf("%d %d",max,min);
}