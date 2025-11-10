#include <stdio.h>

void co(int a[], int s, int *o, int *e) {
    *o = 0;
    *e = 0;
    for (int i = 0; i < s; i++) {
        if (a[i] % 2 == 0) {
            (*e)++;
        } else {
            (*o)++;
        }
    }
}

int main() {
    int a[] = {12, 5, 89, 3, 67, 24, 1, 10, 7};
    int s = sizeof(a) / sizeof(a[0]);
    int o_count, e_count;

    co(a, s, &o_count, &e_count);

    printf("Occurrences of odd numbers: %d\n", o_count);
    printf("Occurrences of even numbers: %d\n", e_count);

    return 0;
}