#include<stdio.h>
#include<string.h>
int main(void)
{
    char st[20];
    int i;

    scanf("%s",st);
    for(i=strlen(st); i>0; i--)//��strlen�����ַ�����,������\n
        printf("%c",st[i-1]);
    return 0;
}
