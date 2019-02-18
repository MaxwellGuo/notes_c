#include<stdio.h>
void Temperature(double Farenheit);
int main(void)
{
    double Farenheit;
    printf("Farenheit:\n");
    scanf("%lf",&Farenheit);
    Temperature(Farenheit);
    while(Farenheit=!"q")
    {
        printf("Farenheit:\n");
        scanf("%lf",&Farenheit);
    }
    return 0;
}
void Temperature(double Farenheit)
{
   double Celsius,Kelvin;
   Celsius=1.8*Farenheit+32.0;
   Kelvin=Celsius+271.3;
   printf("Farenheit=%6.2lf,Celsius=%6.2lf,Kelvin=%6.2lf",Farenheit,Celsius,Kelvin);
}
