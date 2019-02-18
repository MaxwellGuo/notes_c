#include<stdio.h>
int main(void)
{
    int Min,Max;
    int i,sum;

    printf("Enter lower and upper integer limits:");
    scanf("%d %d",&Min,&Max);
    while(Max!=Min)
    {
        sum=0;//注意初值的位置
        for(i=Min; i<=Max; i++)
        {
            sum+=i*i;
        }
        printf("The sums of the squares for %d to %d is %d\n",Min,Max,sum);
        printf("Enter next set of limit:");
        scanf("%d %d",&Min,&Max);
    }
    printf("Done");
    return 0;
}
