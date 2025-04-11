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

   for(int i=n-1;i>0;i--){
    int temp= arr[i];
    int j=n-1
    while(j>0){
        int a=arr[j];
        arr[j]=arr[j-1];
        j--;
    }
    arr[0]=temp;
   }

    for(int i=0;i<n;i++){
        printf("%d",arr[i]);
    }
}