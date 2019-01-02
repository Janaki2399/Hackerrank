#include<stdio.h>
#include<math.h>
#include<stdlib.h>

void update(int *num1, int *num2)
{
    int sum;
    int difference;
     sum=*num1+*num2;
     difference= *num1 - *num2;
    *num1=sum;
    *num2=abs(difference);
}
int main()
{
    int num1,num2;
    printf("enter two numbers");
    scanf("%d%d",&num1,&num2);
    update(&num1,&num2);//call by reference
    printf("After updating %d\n%d",num1,num2);
}
