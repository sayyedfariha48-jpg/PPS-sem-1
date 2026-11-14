#include<stdio.h>
int main()
{
    float c,f;
    printf("enter temperature in celsius");
    scanf("%f",&c);
    f=(c*9/5)+32;
    printf("fahrenheit=%.2f\n",f);
    printf("enter temperature in fahrenheit");
    scanf("%f",&f);
    c=(f-32)*5/9;
    printf("celsius=%.2f\n",c);
    return 0;


}
