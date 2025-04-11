#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Step 1: Find the candidate majority element using Boyer-Moore Voting Algorithm
    int candidate = -1, count = 0;
    for (int i = 0; i < n; i++) {
        if (count == 0) {
            candidate = arr[i];
            count = 1;
        } else {
            if (arr[i] == candidate) {
                count++;
            } else {
                count--;
            }
        }
    }

    // Step 2: Verify if the candidate is the majority element
    int freq = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] == candidate) {
            freq++;
        }
    }

    // Print the result
    if (freq > n / 2) {
        printf("%d\n", candidate);
    } else {
        printf("-1\n");
    }

    return 0;
}