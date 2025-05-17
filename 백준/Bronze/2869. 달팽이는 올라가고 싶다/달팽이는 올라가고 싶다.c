#include <stdio.h>

int main(void)
{
    int A, B, V;
    scanf("%d %d %d", &A, &B, &V);

    int i;
    int height = 0;
    int howDate = 0, howDateModulas;

    howDate = (V - B) / (A - B);
    if((V - B) % ( A - B)) howDate += 1;

    printf("%d\n",  howDate);
    return 0 ;
}