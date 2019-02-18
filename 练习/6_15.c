#include<stdio.h>
int main(void)
{
    int i;
    float Da=100.0,De=100.0;

    for(i=1; Da>=De; i++)
    {
        Da+=100*0.1;
        De*=1.05;
    }
    printf("%d",i-1);//ע�ⲻΪi
    return 0;
}
