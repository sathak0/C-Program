#include <stdio.h>

int main() {
    int n, array[10], subsetArray[100][10], subsetSize[100];
    int x = 0; // Tracks the current subset index

    // Input the size of the array
    scanf("%d", &n);

    // Input the array elements
    for (int i = 0; i < n; i++) {
        scanf("%d", &array[i]);
    }

    // Generate all non-empty subsets
    for (int i = 1; i < (1 << n); i++) {
        subsetSize[x] = 0;
        for (int j = 0; j < n; j++) {
            if (i & (1 << j)) {
                subsetArray[x][subsetSize[x]++] = array[j];
            }
        }
        x++;
    }

    // Print all the subsets
    for (int i = 0; i < x; i++) {
        for (int j = 0; j < subsetSize[i]; j++) {
            printf("%d ", subsetArray[i][j]);
        }
        printf("\n");
    }

    return 0;
}
