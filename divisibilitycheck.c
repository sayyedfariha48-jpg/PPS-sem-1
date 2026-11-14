#include<stdio.h>
int main()
{
    int n;
    printf("enter the number");
    scanf("%d",&n);
    if(n%3==0 && n%5==0)
        printf("divisible by both 3 and 5");
    else if(n%3==0)
        printf("divisible by 3");
    else if(n%5==0)
        printf("divisible by 5");
    else
        printf("not divisible by 3 0r 5");
    return 0;
}
