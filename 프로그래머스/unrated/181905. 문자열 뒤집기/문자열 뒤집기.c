#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

char* solution(const char* my_string, int s, int e) {
    int len = strlen(my_string);

    // 문자열을 저장할 메모리 공간을 동적 할당합니다.
    char* answer = (char*)malloc(len + 1);
    
    // 인덱스 s부터 인덱스 e까지를 뒤집은 문자열을 저장합니다.
    int j = 0;
    for (int i = 0; i < len; i++) {
        if (i >= s && i <= e) {
            answer[i] = my_string[e-j];
            j++;
        } else {
            answer[i] = my_string[i];
        }
    }
    // 문자열 마지막에 NULL 문자를 추가합니다.
    answer[len] = '\0';
    
    return answer;
}