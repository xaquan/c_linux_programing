#include <stdio.h>

int main(void) {
    char line[100];

    printf("Type a sentence: ");

    if (fgets(line, sizeof(line), stdin) == NULL) {
        printf("Input error.\n");
        return 1;
    }

    printf("You typed: %s", line);
    return 0;
}
