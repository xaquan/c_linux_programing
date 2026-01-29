#define _GNU_SOURCE
#include <stdio.h>
#include <stdlib.h>

int main(void) {
    size_t cap = 16; // initial capacity
    size_t len = 0;  // current length
    char *s = malloc(cap);

    if (s == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    int c;

    printf("Enter a string: ");
    while((c = getchar()) != '\n'&& c != EOF){
        if(len + 1 >= cap){
            cap *= 2;
            char *new_s = realloc(s, cap);
            if (new_s == NULL) {
                printf("Memory reallocation failed\n");
                free(s);
                return 1;
            }
            s = new_s;
        }
        s[len++] = (char)c;
    }
    s[len] = '\0'; // null-terminate the string
    printf("You entered: %s\n", s);
    free(s);
    return 0;
}
