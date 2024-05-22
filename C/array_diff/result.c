#include <stdlib.h>

//  return a dynamically allocated array
//  assign the length of this array to *z
//  memory will be freed by the test suite

int* array_diff(const int *a, int n, const int *b, int m, int *z) {
    int count = 0;
    int *result = (int*)malloc(n * sizeof(int));

    for (int i = 0; i < n; i++) {
        int found = 0;
        for (int j = 0; j < m; j++) {
            if (a[i] == b[j]) {
                found = 1;
                break;
            }
        }
        if (!found) {
            result[count++] = a[i];
        }
    }

    *z = count;
    return result;
}
