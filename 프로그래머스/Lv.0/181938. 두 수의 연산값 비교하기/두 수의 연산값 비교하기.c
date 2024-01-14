#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
#include <stdlib.h>

//두 정수 중 더 큰 값을 판별하는 함수
int getMax(int a, int b) {
	return (a > b) ? a : b;
}

// 두 정수를 붙여서 계산하는 함수
int concatenate(int a, int b) {
	int power = 1;
	while (power <= b)
		power *= 10;
	return (a * power) + b;
}

// 두 정수를 2 * a * b 의 식으로 계산하는 함수
int concatenate2(int a, int b) {
	return (2 * a * b);
}

//입력받은 각 a, b 정수를 위의 두 식에 따라 계산한 뒤, 두 결과값 중 더 큰 값을 반환하는 함수
int solution(int a, int b) {
	int ab = concatenate(a, b);
	int ab2 = concatenate2(a, b);

	return getMax(ab, ab2);
}

int main() {
	int a, b;
	scanf("%d %d", &a, &b);

	int result = solution(a, b);

	printf("%d", result);

	return 0;
}