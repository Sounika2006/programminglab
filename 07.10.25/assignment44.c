#include <stdio.h>
int main () {
   int i,j;
   char ch='A';

   for (i=1; i<=4; i++){
    for (j=i ; j<4; j++) {
        printf (" ");
    }
    for (j=1; j<=i; j++){
        printf ("%c", ch++);
    }
    printf ("\n");
}
    return 0;
}