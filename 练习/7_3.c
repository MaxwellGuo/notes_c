#include<stdio.h>
int main(void)
{
    int num,odd=0,even=0,sum_1=0,sum_2=0;

    printf("num:\n");
    scanf("%d",&num);
    while(num!=0)
    {
        if(num%2==0)
        {
            even++;
            sum_1+=num;
        }

        else
        {
            odd++;
            sum_2+=num;
        }
        scanf("%d",&num);
    }
    printf("number of even=%d,number of odd=%d,sum of even=%d,"//输出太长,进行换行
           "sum of odd=%d,average of even=%.2f,average of odd=%.2f",even,odd,sum_1,sum_2,(float)sum_1/even,(float)sum_2/odd);//注意强制转换
    return 0;
}
