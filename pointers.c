#include<stdio.h>
#include<math.h>
#include<stdlib.h>

void update(int *number1, int *number2)
{
    int sum;
    int difference;

     sum=*number1+*number2;
     difference= *number1 - *number2;

    *number1=sum;//sum is stored in number1
    *number2=abs(difference);//absolute value of difference is stored in number2
}
int main()
{
    int number1,number2;

    printf("enter two numbers");
    scanf("%d%d",&number1,&number2);
    //call by reference
    update(&number1,&number2);

    printf("After updating %d\n%d",number1,number2);
}
