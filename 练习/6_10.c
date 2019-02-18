#include<stdio.h>
int main(void)
{
    int i,num[8];

    for(i=0;i<8;i++)
    scanf("%d",&num[i]);
    for(i=0;i<8;i++)
    printf("%d  ",num[7-i]);//注意数组及其元素指标的差别
    return 0;
}
