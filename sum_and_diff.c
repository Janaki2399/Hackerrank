#include<stdio.h>
int main()
{
    int number1,number2;
    float number3,number4;
    int  sum_of_integers,difference_of_integers;
    float sum_of_floatingpointno,difference_of_floatingpointno;

    printf("enter two numbers of integer datatype");
    scanf("%d%d",&number1,&number2);
    printf("enter two numbers of float datatype");
    scanf("%f%f",&number3,&number4);

    sum_of_integers=number1+number2;
    difference_of_integers=number1-number2;

    sum_of_floatingpointno=number3+number4;
    difference_of_floatingpointno=number3-number4;

    printf("sum of integers: %d difference of integers: %d\n",sum_of_integers,difference_of_integers);
    printf("sum of floatingpoint numbers: %.2f,difference of floatingpoint numbers:  %.2f",sum_of_floatingpointno,difference_of_floatingpointno);

}
