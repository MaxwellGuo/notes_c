#include<stdio.h>
int main(void)
{
    float a,b;
    int staus;

    do
    {
        staus=scanf("%f %f",&a,&b);
        if(staus==2)//if else语句提前使用
        printf("%f\n",(a-b)/(a*b));
        else
            break;//跳出循环
    }
    while(staus);//退出循环的条件
    return 0;
}
