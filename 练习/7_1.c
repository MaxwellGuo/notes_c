#include<stdio.h>
int main(void)
{
    char ch;
    int countspace=0,countenter=0,other=0;

    printf("char:");
    while((ch=getchar())!='#')
    {
        if(ch==' ')  //ע��=��==������
            countspace++;//����ո���
        else if(ch=='\n')
            countenter++;//����\n��
        else
            other++;//����
    }
    printf("countspace=%d,countenter=%d,other=%d",countspace,countenter,other);
    return 0;
}
