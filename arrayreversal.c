#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, i;
    // Read the size of the array
    if (scanf("%d", &n) != 1) return 0;

    int *arr = (int*)malloc(n * sizeof(int));

    // Fill the array
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Logic: Print the array in reverse order
    // (Or swap them in place if you need to store the reversed version)
    for(i = n - 1; i >= 0; i--) {
        printf("%d ", arr[i]);
    }

    free(arr);
    return 0;
}