#include<stdio.h>

int main()
{
    int number;
    int sum=0,digit;
    printf("enter a five digit number");
    scanf("%d ",&number);
    while(number!=0)
    {
        digit=number%10;//getting the remainder 
        sum=sum+digit;
        number=number/10;//getting the quotient 
    }
    printf("Sum is %d",sum);
}
