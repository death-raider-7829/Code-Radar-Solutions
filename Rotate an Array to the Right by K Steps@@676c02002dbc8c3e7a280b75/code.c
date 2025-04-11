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
    k=k%n;

   for(int i=0;i<k;i++){
    int temp= arr[n-1];
    int j=n-1;
    while(j>0){
        arr[j]=arr[j-1];
        j--;
    }
    arr[0]=temp;
   }

    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}