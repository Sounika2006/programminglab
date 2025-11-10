#include <stdio.h>

void fm(int a[], int s, int *mx, int *mn) {
    *mx = a[0];
    *mn = a[0];
    for (int i = 1; i < s; i++) {
        if (a[i] > *mx) {
            *mx = a[i];
        }
        if (a[i] < *mn) {
            *mn = a[i];
        }
    }
}

int main() {
    int a[] = {12, 5, 89, 3, 67, 24};
    int s = sizeof(a) / sizeof(a[0]);
    int mx, mn;

    fm(a, s, &mx, &mn);

    printf("Maximum element: %d\n", mx);
    printf("Minimum element: %d\n", mn);

    return 0;
}