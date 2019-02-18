#include<stdio.h>
#define Over 15.00
#define Rate_1 0.15
#define Rate_2 0.2
#define Rate_3 0.25
#define Break_1 300
#define Break_2 450
#define Break_3 40
#define Re_1 Break_1*Rate_1
#define Re_2 (Break_2-Break_1)*Rate_2
#define Total_1 Break_3*Basic
int main(void)
{
    float hour,total,re,Basic;
    int Rank;

    printf("hour=");
    scanf("%f",&hour);
    printf("rank=");
    scanf("%d",&Rank);
    switch(Rank)
    {
    case 1:
        Basic=8.75;
        break;
    case 2:
        Basic=9.33;
        break;
    case 3:
        Basic=10.00;
        break;
    case 4:
        Basic=11.20;
        break;
    default:
        break;
    }
    if(hour<=40)
        total=hour*Basic;
    else
        total=Total_1+(hour-40)*Over;
    if(total<=300)
        re=total*Rate_1;
    else if(total>300&&total<=450)
        re=Re_1+(total-300)*Rate_2;
    else
        re=Re_1+Re_2+(total-450)*Rate_3;
    printf("total=%.2f,revenue=%.2f,net total=%.2f",total,re,total-re);
    return 0;
}
