#include <stdio.h>
#define LEN_INPUT 1000001

int main(void) {
	// 문자 배열 선언
    char s1[LEN_INPUT];
    // 사용자에게 입력받는 함수 - 문자열 입력, s1 변수에 저장
    scanf("%s", s1);
    // 입력 받은 문자열을 출력
    printf(s1);
    return 0;
}