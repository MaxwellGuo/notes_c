#include<stdio.h>
int main(void)
{
    int i;
    float sum=100.0;

    for(i=1; sum>0.0; i++)
    {
        sum*=1.08;
        sum-=10.0;
    }
    printf("%d",i-1);
    return 0;
}
