#include<stdio.h>
float result(float a,float b);//函数声明
int main(void)
{
    float a,b;
    int staus;

    do
    {
        staus=scanf("%f %f",&a,&b);
        printf("%f\n",result(a,b));//函数调用
    }
    while(staus);
    return 0;
}
float result(float a,float b)//函数编写
{
    float c;

    c=(a-b)/(a*b);
    return c;
}
