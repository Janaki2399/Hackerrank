#include<stdio.h>

int maxnumber(int num1,int num2,int num3,int num4)
{
    int numbers_array[5]={num1,num2,num3,num4};
    int maximum=0;
    int i=0;
    while(i<5)
    {
        if(numbers_array[i]>maximum)
        {
            maximum=numbers_array[i];
        }
        i++;
    }
    return maximum;//maximum value is returned
}

void main()
{
    int number1,number2,number3,number4;
    int answer;

    printf("enter 4 numbers");
    scanf("%d%d%d%d",&number1,&number2,&number3,&number4);

    answer=maxnumber(number1,number2,number3,number4);/*function maxnumber() is called which returns the maximum number and it is stored 
                                                                        in answer*/
    printf("%d",answer);
}

