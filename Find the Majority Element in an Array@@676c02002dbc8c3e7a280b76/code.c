// Your code here...
#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int arr[n],brr[1000];
    int count=0;
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        int x=0;
        while(x<i){
            if(brr[x]!=arr[i] && x==i-1){
                brr[count]=arr[i];
                count++;
                
            }
            x++;
        }
    }

    for(int i=0;i<count;i++){
        int z=0;
        for(int j=0;j<n;j++){
            if(brr[i]==arr[j]){
                z++;
            
            if(z>(n/2)){
                printf("%d",brr[i]);
            }
            else if((z<(n/2) || z==(n/2)) && i==count-1){
                 printf("-1");
                 }
            }
        }
    }
}