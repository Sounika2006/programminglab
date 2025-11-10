#include <stdio.h>

int main() {
    int roll;

    printf("Enter roll number: ");
    scanf("%d", &roll);

    if (roll == 100)
        printf("Roll number 100 is present.\n");

    if (roll != 100)
        printf("Roll number 100 is not present.\n");

    return 0;
}
