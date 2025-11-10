#include <stdio.h>

int main()
{
    int a, b, c;
    
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);
    if (a >= b && a >= c) {
        printf("%d is maximum.\n", a);
    } 
    else if (b >= a && b >= c) {
        printf("%d is maximum.\n", b);
    }
        printf("%d is maximum.\n", c);
    }
    return0;
}