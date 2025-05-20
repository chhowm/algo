#include <stdio.h>

int main(void)
{
    while(1)
    {
        int n;
        int sum = 0;
        int i, j = 0;
        int divisor[100000] ={0};

        scanf("%d", &n);
        if(n == -1)
        {
            break;
        }
        
        // 자기 자신을 제외한 약수 들을 divisor 배열에 저장
        for(i = 1 ; i < n ; i++)
        {
            if(n % i == 0)
            {
                sum += i; // 약수들의 합
                divisor[j] = i;
                j++;                
            }
            divisor[j] = 0; // 약수들의 마지막을 확실히 하기 위해 마지막에 0 대입
        }

        if(sum == n)
        {
            int k = 1;
            printf("%d = 1", n);
            while(divisor[k])
            {
                printf(" + %d", divisor[k]);
                k++;
            }
            printf("\n");
        }
        else
        {
            printf("%d is NOT perfect.\n", n);
        }
    }
    return 0;
}