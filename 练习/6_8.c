#include<stdio.h>
float result(float a,float b);//��������
int main(void)
{
    float a,b;
    int staus;

    do
    {
        staus=scanf("%f %f",&a,&b);
        printf("%f\n",result(a,b));//��������
    }
    while(staus);
    return 0;
}
float result(float a,float b)//������д
{
    float c;

    c=(a-b)/(a*b);
    return c;
}
