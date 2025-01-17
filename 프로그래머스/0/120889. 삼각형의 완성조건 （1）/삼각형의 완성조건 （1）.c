#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// sides_len은 배열 sides의 길이입니다.
int solution(int sides[], size_t sides_len) {
    // 배열을 오름차순으로 정렬합니다.
    for (size_t i = 0; i < sides_len - 1; i++) {
        for (size_t j = i + 1; j < sides_len; j++) {
            if (sides[i] > sides[j]) {
                int temp = sides[i];
                sides[i] = sides[j];
                sides[j] = temp;
            }
        }
    }

    // 삼각형 조건 확인: 가장 긴 변 < 나머지 두 변의 합
    if (sides[2] < sides[0] + sides[1]) {
        return 1; // 삼각형을 만들 수 있음
    } else {
        return 2; // 삼각형을 만들 수 없음
    }
}