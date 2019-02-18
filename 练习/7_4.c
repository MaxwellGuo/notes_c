#include<stdio.h>
int main(void)
{
    char ch;
    int m=0,n=0;

    printf("char:\n");
    while((ch=getchar())!='#')
    {
        if(ch=='.')
        {
            ch='!';
            m++;
            putchar(ch);
        }
        else if(ch=='!')
            {
                n++;
                putchar(ch);
                putchar(ch);
            }
        else
            putchar(ch);
    }
    printf("\nÌæ»»Êý:%d",m+n);
    return 0;
}
