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
            num_2[i]=0.0;//ע�⸳��ֵ��λ��
            for(j=0; j<=i; j++)
            {
                num_2[i]+=num_1[j];//�ڶ�������Ԫ��Ϊ��һ������Ԫ�ص��ۻ���
            }
        }
    for(i=0; i<8; i++)
        printf("%0.2lf     ",num_1[i]);
    printf("\n");
    for(i=0; i<8; i++)
        printf("%0.2lf     ",num_2[i]);
    return 0;
}
