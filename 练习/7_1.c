#include<stdio.h>
int main(void)
{
    char ch;
    int countspace=0,countenter=0,other=0;

    printf("char:");
    while((ch=getchar())!='#')
    {
        if(ch==' ')  //注意=与==的区别
            countspace++;//计算空格数
        else if(ch=='\n')
            countenter++;//计算\n数
        else
            other++;//其他
    }
    printf("countspace=%d,countenter=%d,other=%d",countspace,countenter,other);
    return 0;
}
