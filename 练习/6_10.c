#include<stdio.h>
int main(void)
{
    int i,num[8];

    for(i=0;i<8;i++)
    scanf("%d",&num[i]);
    for(i=0;i<8;i++)
    printf("%d  ",num[7-i]);//ע�����鼰��Ԫ��ָ��Ĳ��
    return 0;
}
