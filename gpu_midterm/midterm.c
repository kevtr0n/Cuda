#include <stdio.h>

/**
 * Calculates the length of a given char*.
 * ---------------------------------------
 * @param s     a string
 * @return      the length of s
 */ 
int mystrlen(char* s) {
    
    int len = 0;
    for (; *s != '\0'; s++) {
        len++;
    }

    return len;
}

/**
 * Finds the first occurrence of a specified
 * character in a string.
 * -----------------------------------------
 * @param s     a string
 * @param c     a char
 * @return      an index value
 */
int mystrchar(char* s, char c) {
    int index = 0;
    for (;*s != '\0'; s++) {
        if (*s == c) {
            return index;
        }
        index++;
    }
    return -1;
}

/**
 * Concatenates two strings together and
 * returns the result.
 * -------------------------------------
 * @param s     start string
 * @param t     end string
 * @return      concatenated string
 */
char* mystrcat(char* s, char* t) {
    
    int i, j;
    for (i = 0; s[i] != '\0'; i++) {
        ;
    }
    
    for (j = 0; t[j] != '\0'; j++) {
        s[i + j] = t[j];
    }
    s[i + j] = '\0';

    return s;
}

int mystrcmp(char* s, char* t) {
    
    for (int i = 0; s[i] != '\0' || t[i] != '\0'; i++) {
        if (s[i] != t[i]) {
            return -1;
        }
    }
    return 0;
}

int main(int argc, char** argv) {
    char* str = "Poops";
    int len = mystrlen(str);
    printf("Length: %d\n", len);

    char p = 'P';
    char o = 'o';
    int posP = mystrchar(str, p);
    int posO = mystrchar(str, o);
    printf("Position(p): %d\n", posP);
    printf("Position(o): %d\n", posO);

    char* cat = " are funny!";
    char* result = mystrcat(str, cat);
    printf("Result: %s\n", result);

    char string[] = "String1";
    char string1[] = "String";
    int res = mystrcmp(string, string1);
    printf("Result: %d\n", res);
}