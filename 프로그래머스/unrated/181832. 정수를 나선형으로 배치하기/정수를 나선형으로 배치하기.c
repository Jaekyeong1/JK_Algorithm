#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int** solution(int n) {
    int** answer = (int**)malloc(n * sizeof(int*)); // 2차원 배열 동적할당

    // 2차원 배열 초기화
    for (int i = 0; i < n; i++) {
        answer[i] = (int*)malloc(n * sizeof(int));
        for (int j = 0; j < n; j++) {
            answer[i][j] = 0; // 배열 값을 0으로 초기화
        }
    }

    // 달팽이 배열 값 채우기
    int num = 1; // 시작 숫자
    int row = 0, col = 0; // 현재 위치
    int max_row = n - 1, max_col = n - 1; // 이동할 최대 범위
    int min_row = 0, min_col = 0; // 이동할 최소 범위

    while (num <= n * n) {
        // 오른쪽으로 이동
        while (col <= max_col) {
            answer[row][col++] = num++;
        }
        col--;
        row++;
        min_row++;

        // 아래쪽으로 이동
        while (row <= max_row) {
            answer[row++][col] = num++;
        }
        row--;
        col--;
        max_col--;

        // 왼쪽으로 이동
        while (col >= min_col) {
            answer[row][col--] = num++;
        }
        col++;
        row--;
        max_row--;

        // 위쪽으로 이동
        while (row >= min_row) {
            answer[row--][col] = num++;
        }
        row++;
        col++;
        min_col++;
    }

    return answer;
}