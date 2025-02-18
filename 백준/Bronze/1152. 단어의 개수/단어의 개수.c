#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

#define MAX 1000000

int main() {
    char str[MAX + 1]; // +1은 널문자('\0') 포함
    int count = 0;
    int i = 0;
    int inWord = 0; // 단어 안에 있는지 여부 (0: 단어 밖, 1: 단어 안)

    // 문자열 입력
    fgets(str, MAX + 1, stdin);

    // 개행 문자 제거
    str[strcspn(str, "\n")] = '\0';

    // 문자열 순회하며 단어 개수 세기 (O(n))
    while (str[i] != '\0') {
        if (str[i] != ' ') { // 공백이 아닐 때 (단어 시작 가능)
            if (!inWord) { // 단어의 시작을 감지
                count++;
                inWord = 1; // 단어 안으로 진입
            }
        } else { // 공백이면 단어 끝
            inWord = 0;
        }
        i++;
    }

    printf("%d\n", count);
    return 0;
}
