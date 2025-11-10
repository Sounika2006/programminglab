#include <stdio.h>

void sm(int r, int c, int m1[][c], int m2[][c], int s[][c]) {
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            s[i][j] = m1[i][j] + m2[i][j];
        }
    }
}

void pm(int r, int c, int m[][c]) {
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            printf("%d ", m[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int r = 2, c = 3;
    int m1[2][3] = {{1, 2, 3}, {4, 5, 6}};
    int m2[2][3] = {{7, 8, 9}, {10, 11, 12}};
    int s[2][3];

    printf("Matrix 1:\n");
    pm(r, c, m1);

    printf("\nMatrix 2:\n");
    pm(r, c, m2);

    sm(r, c, m1, m2, s);

    printf("\nSum Matrix:\n");
    pm(r, c, s);

    return 0;
}