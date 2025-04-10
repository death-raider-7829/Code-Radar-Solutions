#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    if (n == 1) {
        printf("-1\n");
        return 0;
    }

    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int max = -1000000, sec = -1000000;

    
    for (int i = 0; i < n; i++) {
        if (arr[i] > max) {
            sec = max; 
            max = arr[i]; 
        } else if (arr[i] > sec && arr[i] != max) {
            sec = arr[i]; 
        }
    }

    if (sec == -1000000) {
        printf("-1\n"); 
    } else {
        printf("%d\n", sec);
    }

    return 0;
}