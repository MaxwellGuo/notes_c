#include<stdio.h>
#include<math.h>//ע��ͷ�ļ���������
int main(void)
{
    int i,ch[8];

    for(i=0; i<8; i++)
        ch[i]=pow(2,i+1);
    i=0;
    do
    {
        printf("%d ",ch[i]);
    }while(++i<8);
    return 0;
}
