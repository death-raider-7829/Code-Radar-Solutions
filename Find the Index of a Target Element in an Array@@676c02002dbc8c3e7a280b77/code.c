// Your code here...
#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int x;
    scanf("%d",&x);

    for(int i=0;i<n;i++){
        if(arr[i]==x){
            printf("%d",i);
            break;
        }
        else if(arr[i]!=x && i==n-1){
            printf("-1");
        }
    }
}