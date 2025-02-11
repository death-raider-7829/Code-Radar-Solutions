// Your code here...
#include <stdio.h>

int main(){
    int a,b;
    scanf("%d %d", &a,&b);
    printf("%s", (!(a>0) && !(b> 0))?"True":"False");
}