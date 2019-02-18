//参考程序清单7.5
#include<stdio.h>
#include<stdbool.h>
int main(void)
{
    unsigned long i,num;
    unsigned long div;
    bool isPrime;

    printf("Please enter an integer for analysis:");
    printf("Enter q to quit.\n");
    while(scanf("%lu",&num)==1)
    {
        printf("prime number:\n");
        for(i=2; i<=num; i++)
        {
            for(div=2,isPrime=true;(div*div)<=i; div++)
            {
                if(i%div==0)
                    isPrime=false;
            }
            if(isPrime)
                printf("%lu\n",i);

            }
    }
    return 0;
}

