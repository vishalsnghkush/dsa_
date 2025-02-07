#include <stdio.h>
#include <stdlib.h>

void merge(int *a, int n1, int *b, int n2, int *ans) {
    int i = 0, j = 0, k = 0;

    while (i < n1 && j < n2) {
        if (a[i] < b[j]) {
            ans[k++] = a[i++];
        } else {
            ans[k++] = b[j++];
        }
    }

    while (i < n1) {
        ans[k++] = a[i++];
    }

    while (j < n2) {
        ans[k++] = b[j++];
    }
}

void mergesort(int *v, int n) {
    if (n <= 1) return;

    int mid = n / 2;
    int *a = (int *)malloc(mid * sizeof(int));
    int *b = (int *)malloc((n - mid) * sizeof(int));

    for (int i = 0; i < mid; i++) {
        a[i] = v[i];
    }
    for (int i = mid; i < n; i++) {
        b[i - mid] = v[i];
    }

    mergesort(a, mid);
    mergesort(b, n - mid);

    merge(a, mid, b, n - mid, v);

    free(a);
    free(b);
}

int main() {
    int v[] = {5, 1, 3, 0, 4, 9, 6};
    int n = sizeof(v) / sizeof(v[0]);

    mergesort(v, n);

    // printing
    for (int i = 0; i < n; i++) {
        printf("%d ", v[i]);
    }
    printf("\n");

    return 0;
}
