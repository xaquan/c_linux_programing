#include <stdio.h>

void remove_newline(char *s){
    /*
    Loop through the string to find and remove newline character
    \0 is the string terminator (end of string)
    if \n (a newline character) is found, replace it with \0
    */
    while (*s != '\0'){
        if (*s == '\n'){
            *s = '\0';
            return;
        }
        s++;
    }
}

void reverse_string(char* s){
    char *left = s;
    char *right = s;

    /* Move right pointer to the end of the string */
    while(*right != '\0'){
        right++;
    }
    
    /* Step back one position to point to the last character in the string */
    right--;

    /* Swap characters from start and end moving towards the center */
    while(left < right){
        char temp = *left;
        *left = *right;
        *right = temp;
        left++;
        right--;
    }
}

int main(void){
    char str[100];

    printf("Enter a string: ");
    if (fgets(str, sizeof(str), stdin) == NULL) {
        printf("Input error.\n");
        return 1;
    }

    remove_newline(str);
    reverse_string(str);

    printf("Reversed string: %s\n", str);

    return 0;
}