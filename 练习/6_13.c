#include<stdio.h>
int main(void)
{
    double num_1[8],num_2[8];
    int i,j;

    printf("num_1[8]:");
    for(i=0; i<8; i++)
        scanf("%lf",&num_1[i]);
        for(i=0; i<8; i++)
        {
            num_2[i]=0.0;//注意赋初值的位置
            for(j=0; j<=i; j++)
            {
                num_2[i]+=num_1[j];//第二个数组元素为第一个数组元素的累积和
            }
        }
    for(i=0; i<8; i++)
        printf("%0.2lf     ",num_1[i]);
    printf("\n");
    for(i=0; i<8; i++)
        printf("%0.2lf     ",num_2[i]);
    return 0;
}
