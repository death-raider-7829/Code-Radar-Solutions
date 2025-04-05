#include<stdio.h>

int mami(int arr[],int n){
    int max=arr[0],min=arr[0];
        for(int i=1;i<n;i++){
            if(max<arr[i] || max==arr[i]){
                max=arr[i];
            }
            else if(i==n-1){
                return min;
            }
        }
        for(int j=0;j<n;j++){
            if(min>arr[j] || min==arr[j]){
                min=arr[j];
            }
            else if(j==n-1){
                return min;
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
    printf("%d %d",mami(arr,n));
}