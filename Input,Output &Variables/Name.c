// Accept a user’s name and print a message: “Hello, [Name]!”.

#include <stdio.h>
int main() {
    char name[50];
    printf("Enter your name: ");
    scanf("%49s", name);
    printf("Hello, %s!\n", name);
    return 0;
}

