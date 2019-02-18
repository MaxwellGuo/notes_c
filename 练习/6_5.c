#include<stdio.h>
#define MAX 10
#define MIN 0
int main(void)
{
    int n;

    for(n=MIN; n<=MAX; n++)
    {
        printf("%d %d %d\n",n,n*n,n*n*n);
    }
    return 0;
}
