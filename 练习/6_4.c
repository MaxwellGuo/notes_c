#include<stdio.h>
int main(void)
{
    char ch[26];
    int i,j,m,n;

    for(n=0; n<5; n++)
    {
        for(i=0; i<4-n; i++)//�ո�
            printf(" ");
        for(m=0; m<=n; m++)//����
            printf("%c",ch[m]='A'+m);
        for(j=0; j<n; j++)
            printf("%c",ch[n+1]=ch[n]-j-1);//����
        printf("\n");
    }
    return 0;
}
