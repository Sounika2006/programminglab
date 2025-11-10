#include <stdio.h>
#include <string.h>

int p(char *s) {
    int l = strlen(s);
    int i = 0;
    int j = l - 1;
    while (i < j) {
        if (s[i] != s[j]) {
            return 0; 
        }
        i++;
        j--;
    }
    return 1; 
}

int main() {
    char s1[] = "madam";
    char s2[] = "hello";

    if (p(s1)) {
        printf("\"%s\" is a palindrome.\n", s1);
    } else {
        printf("\"%s\" is not a palindrome.\n", s1);
    }

    if (p(s2)) {
        printf("\"%s\" is a palindrome.\n", s2);
    } else {
        printf("\"%s\" is not a palindrome.\n", s2);
    }

    return 0;
}