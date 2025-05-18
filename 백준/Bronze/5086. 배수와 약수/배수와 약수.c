#include <stdio.h>

int main(void)
{
    int A, B;
    int i;
    for(i=0 ; ; i++)
    {
        scanf("%d %d", &A, &B);
        if(A == 0 && B == 0) break;
        else if(B % A == 0) printf("factor\n");
        else if(A % B == 0) printf("multiple\n");
        else printf("neither\n");
    }
    return 0;
}