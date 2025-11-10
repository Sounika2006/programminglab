#include <stdio.h>

int s(int n) {
    int u = 0;
    for (int i = 1; i <= n; i++) {
        u += (2 * i);
    }
    return u;
}

int main() {
    int c = 10;
    int r = s(c);
    printf("The sum of the first %d even natural numbers is: %d\n", c, r);
    return 0;
}