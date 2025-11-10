#include <stdio.h>

void t(int r, int c, int m[][c], int tr[][r]) {
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            tr[j][i] = m[i][j];
        }
    }
}

void p(int r, int c, int m[][c]) {
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            printf("%d ", m[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int r = 2, c = 3;
    int m[2][3] = {{1, 2, 3}, {4, 5, 6}};
    int tr[3][2]; 

    printf("Original Matrix:\n");
    p(r, c, m);

    t(r, c, m, tr);

    printf("\nTransposed Matrix:\n");
    p(c, r, tr); 

    return 0;
}