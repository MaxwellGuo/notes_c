#include<stdio.h>
int main(void)
{
    int Kind;
    float re;

    printf("Kind:");
    while(scanf("%d",&Kind))
    {
        switch(Kind)
        {
        case 1:
            re=0.15*17850+0.28*(20000-17850);
            break;
        default:
            re=0;
            break;
        }
        printf("revenue=%.2f",re);
        printf("\nKind:");
    }
    return 0;
}
