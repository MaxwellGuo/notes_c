#include<stdio.h>
int main(void)
{
    char ch[5];
    int i;

    for(i=0; i<5; i++)
        scanf("%c",&ch[i]);//注意按下回车时会产生\n
    for(i=0; i<5; i++)
        printf("%c ",ch[4-i]);
    return 0;
}
