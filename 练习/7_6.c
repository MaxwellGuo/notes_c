#include<stdio.h>
#include<string.h>
int main(void)
{
    char ch[100];
    int i,n=0;

    printf("char:\n");
    ch[0]=getchar();//为了执行第15行
    for(i=1;i<100;i++)
         {
          ch[i]=getchar();
          if(ch[i]=='#')
            break;
          if(ch[i-1]=='e'&&ch[i]=='i')//记住前一字符
            n++;
         }
    printf("number of 'ie':%d",n);
    return 0;
}
