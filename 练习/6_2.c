#include<stdio.h>
int main(void)
{
    int m,n;
    for(n=0; n<5; n++)//Ç¶Ì×Ñ­»·
    {
        for(m=0; m<=n; m++)
            printf("$");
        printf("\n");
    }
    return 0;
}
