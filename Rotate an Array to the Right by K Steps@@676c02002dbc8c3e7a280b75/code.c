// Your code here...
#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int k;
    scanf("%d",&k);

    for(int i=0;i<k;i++){
        int temp=arr[n-1];
        int j=0;
        while(j<n-1){
            int a=arr[j];
            arr[j+1]=arr[j];
            arr[j+1]=a;
            j++;
        }
        arr[0]=temp;
    }

    for(int i=0;i<n;i++){
        printf("%d",arr[i]);
    }
}