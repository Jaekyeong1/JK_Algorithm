#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

char* solution(char* my_string) {
    char arr[256] = {0};
    int length = strlen(my_string);
    for (int i = 0; i < length; i++) {
        if (!strchr(arr, my_string[i])) {
            strncat(arr, &my_string[i], 1);
        }
    }
    return arr;
}

int main() {
    char my_string[] = "Hello, World!";
    printf("%s", solution(my_string));
    return 0;
}