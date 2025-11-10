#include <stdio.h> 
int main() {
    int n;

    printf("Enter an integer: ");
    scanf("%d", &n);


    printf("The last digit of integer with out modulas is: %d\n",n-n/10*10);
    printf("The last digit of integer with modulas is: %d\n", n%10);

    return 0;
}
