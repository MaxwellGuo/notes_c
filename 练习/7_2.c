#include<stdio.h>
int main(void)
{
    char ch;
    int num=1;

    printf("char:");
    while((ch=getchar())!='#')
    {
        if((num)%9!=0)//ע�ⲻ��8
        {
            putchar(ch);
            printf(" %d      ",ch);
        }
        else
            putchar('\n');
        num++;
    }
    return 0;
}
