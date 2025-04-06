// Your code here...
#include <stdio.h>

int main() {
    char a;
    scanf("%c", &a);
    
    if (a > 64 && a < 91) { 
        printf("Uppercase\n");
    }

    else if (a > 96 && a < 123) { 
        printf("Lowercase\n");
    }
    
    else {
        printf("Not an alphabet\n");
    }
}
