#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
int solution(const char* my_string) {
    int answer = 0;
    int len = strlen(my_string);
    int i;
    int w;
    for(i=0 ; i<len ; i++)
    {
        switch(my_string[i])
        {
            case '1':
            case'2':
            case'3':
            case'4':
            case'5':
            case'6':
            case'7':
            case'8':
            case'9':
            case'0':
                answer += my_string[i]-'0';
                break;
            default:
                ;     
        }
    }
    return answer;
}