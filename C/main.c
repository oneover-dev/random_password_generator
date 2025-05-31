#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int length;
    printf("Enter password length: ");
    scanf("%d", &length);

    if (length <= 0) {
        printf("Length must be greater than 0\n");
        return 1;
    }

    const char charset[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789!@#$%^&*()-_=+[]{}<>?/|";
    int charsetSize = sizeof(charset) - 1;

    srand(time(NULL));

    for (int i = 0; i < length; i++) {
        int key = rand() % charsetSize;
        printf("%c", charset[key]);
    }

    printf("\n");
    return 0;
}
