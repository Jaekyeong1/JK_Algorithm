#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int* solution(int num_list[], size_t num_list_len) {
    int* answer = (int*)malloc((num_list_len - 5) * sizeof(int)); // 결과를 저장할 배열 할당
    int i, j, temp;

    // 배열을 오름차순으로 정렬
    for (i = 0; i < num_list_len - 1; i++) {
        for (j = i + 1; j < num_list_len; j++) {
            if (num_list[i] > num_list[j]) {
                temp = num_list[i];
                num_list[i] = num_list[j];
                num_list[j] = temp;
            }
        }
    }

    // 가장 작은 5개의 수를 제외한 수를 오름차순으로 저장
    j = 0;
    for (i = 5; i < num_list_len; i++) {
        answer[j++] = num_list[i];
    }

    return answer;
}