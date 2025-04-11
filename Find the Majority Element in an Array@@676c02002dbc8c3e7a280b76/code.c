// Your code here...
#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int arr[n],brr[1000];
    int count=0,z=0;
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
        for(int j=0;j<n;j++){
            if(brr[i]==arr[j]){
                z++;
            
            if(z>(n/2)){
                printf("%d",brr[i]);
            }
        }
        }
    }
    if(z<(n/2) || z==(n/2)){
        printf("-1");
    }
    

    
}