#include<stdio.h>
#include<math.h>
int main(void)
{
    float i,Max,sum_1=0.0,sum_2=0.0;//ע�⸳��ֵ��λ��
    int staus;
    printf("Max:");
    staus=scanf("%f",&Max);
    while(staus)
    {
            for(i=0.0; i<Max; i++)
        {
            sum_1+=1/(i+1);
            sum_2+=pow(-1,(int)i%2)/(i+1);//ע��ȡ�������������Ϊ����
        }
     printf("sum_1=%f,sum_2=%f\n",sum_1,sum_2);
     printf("Max:");
     staus=scanf("%f",&Max);
    }
    return 0;
}
