#include<stdio.h>
int main(void)
{
    float a,b;
    int staus;

    do
    {
        staus=scanf("%f %f",&a,&b);
        if(staus==2)//if else�����ǰʹ��
        printf("%f\n",(a-b)/(a*b));
        else
            break;//����ѭ��
    }
    while(staus);//�˳�ѭ��������
    return 0;
}
