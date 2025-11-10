#include <stdio.h>

int sl(char *s) {
    int l = 0;
    while (*s != '\0') {
        l++;
        s++;
    }
    return l;
}

void sc(char *d, char *s) {
    int i = 0;
    while (s[i] != '\0') {
        d[i] = s[i];
        i++;
    }
    d[i] = '\0'; 
}

int sm(char *s1, char *s2) {
    while (*s1 != '\0' && *s2 != '\0' && *s1 == *s2) {
        s1++;
        s2++;
    }
    return *s1 - *s2;
}

void sa(char *d, char *s) {
    while (*d != '\0') {
        d++;
    }
    while (*s != '\0') {
        *d = *s;
        d++;
        s++;
    }
    *d = '\0'; 
}

int main() {
    char s1[] = "hello";
    char s2[] = "world";
    char d1[20];
    char d2[20] = "programming ";
    
    printf("Length of \"%s\": %d\n", s1, sl(s1));

    sc(d1, s1);
    printf("Copied string: \"%s\"\n", d1);

    char c1[] = "apple";
    char c2[] = "apple";
    char c3[] = "banana";

    if (sm(c1, c2) == 0) {
        printf("\"%s\" and \"%s\" are equal.\n", c1, c2);
    } else {
        printf("\"%s\" and \"%s\" are not equal.\n", c1, c2);
    }

    if (sm(c1, c3) == 0) {
        printf("\"%s\" and \"%s\" are equal.\n", c1, c3);
    } else {
        printf("\"%s\" and \"%s\" are not equal.\n", c1, c3);
    }

    printf("Original d2: \"%s\"\n", d2);
    sa(d2, s2);
    printf("Concatenated string: \"%s\"\n", d2);

    return 0;
}