#include<stdio.h>
int main()
{
    char gender,qualification;

    int yearsos, salary=0;

    printf("\n Enter your gender,qualification,yearofs \n");
    scanf("%c %c %d",&gender,&qualification,&yearsos);


    if((gender=='M') &&  (qualification=='p') && (yearsos>=10) )
    {
        printf("\n Salary=15000 \n");

    }
    else if( (gender=='F') && (qualification=='p') && (yearsos>=10) )
    {
        printf("\n Salary=12000 \n");

    }
    else if(
        (gender=='M') &&  (yearsos>=10) && (qualification=='g') ||
        (gender=='M') &&  (yearsos<10)  && (qualification=='p') ||
        (gender=='F') &&  (yearsos<10)  && (qualification=='p')
    )
    {
        printf("\n Salary=10000 \n");
    }
    else if((gender=='F') && (yearsos>=10)  && (qualification=='g'))
    {
        printf("\n Salary=9000 \n");
    }
    else if((gender=='M') && (yearsos<=10) && (qualification=='g'))
    {
        printf("\n Salary=7000 \n");
    }
    else if((gender=='F') && (yearsos<=10) && (qualification=='g'))
    {
        printf("\n Salary=6000 \n");
    }

    printf("\n");

    return 0;
}