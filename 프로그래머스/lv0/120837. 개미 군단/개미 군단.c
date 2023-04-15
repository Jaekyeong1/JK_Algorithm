#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int hp) {
    int answer = 0;
    int gen = hp / 5;
    int sol = (hp % 5) / 3;
    int work = (hp % 5) % 3 ;
    answer = gen + sol + work;
    return answer;
}