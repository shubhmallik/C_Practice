#include <stdio.h>

int main(){
float income;
printf("what is your income\n");
scanf("%f", &income);
if (income<=250000)
{
    printf("tax on your income is %f",0.05*income);
}

if (income>250000 && income<500000)
{
printf("tax on your income is %f", 0.10*(income-250000));}

if (income>=500000 && income<3000000)
{
    printf("tax on your income is %f", 0.20*(income-500000));
}

if (income>=3000000 && income<10000000)
{
    printf("tax on your income is %f", 0.30*(income-3000000));
}

if (income>=10000000)
{
    printf("tax on your income is %f", 0.30*(income-3000000)+(0.15*(income-10000000)));
}
return 0;
}