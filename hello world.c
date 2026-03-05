#include <stdio.h>

int main() {
    printf("Hello World\n");
    char input[100];
    printf("Please enter something: ");
    scanf("%s", input);
    printf("You entered: %s\n", input);
    return 0;
}
