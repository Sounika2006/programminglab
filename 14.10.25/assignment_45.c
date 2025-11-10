#include <stdio.h>

int main() {
    int totalCookies, cookiesPerBox = 24, boxesPerContainer = 75;
    int boxes, containers;

    printf("Enter total number of cookies: ");
    scanf("%d", &totalCookies);

    boxes = (totalCookies + cookiesPerBox - 1) / cookiesPerBox;
    containers = (boxes + boxesPerContainer - 1) / boxesPerContainer;

    printf("Boxes needed: %d\n", boxes);
    printf("Containers needed: %d\n", containers);

    return 0;
}
