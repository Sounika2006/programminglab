#include <stdio.h>

int l(int arr[], int s, int t) {
    for (int i = 0; i < s; i++) {
        if (arr[i] == t) {
            return i;
        }
    }
    return -1;
}

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int s = sizeof(arr) / sizeof(arr[0]);
    int t = 30;
    int r = l(arr, s, t);

    if (r != -1) {
        printf("Element %d is present at index %d.\n", t, r);
    } else {
        printf("Element %d is not present in the array.\n", t);
    }

    t = 90;
    r = l(arr, s, t);

    if (r != -1) {
        printf("Element %d is present at index %d.\n", t, r);
    } else {
        printf("Element %d is not present in the array.\n", t);
    }

    return 0;
}