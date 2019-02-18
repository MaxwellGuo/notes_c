#include<stdio.h>
int main(void)
{
    char ch[26];
    int m,n;
    for(n=0; n<6; n++)
    {
        for(m=0; m<=n; m++)
            printf("%c",ch[m]='F'-m);//½µÐòÅÅÁÐ
        printf("\n");
    }
    return 0;
}
