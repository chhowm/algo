#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N;
    scanf("%d", &N);

    int* oddArray = (int *)malloc(sizeof(int) * N);
    int i, j;
    int oddCount = 0;
    for(i=0 ; i<N ; i++)
    {
        scanf("%d", &oddArray[i]);
        int divisorCount = 0;
        for(j=1 ; j<=oddArray[i] ; j++)
        {
            if(oddArray[i] % j == 0)
            {
                divisorCount++;
            }
        }
        if(divisorCount == 2)
        {
            oddCount++;
        }
    }
    printf("%d", oddCount);
    free(oddArray);
    return 0;
}