#include<stdio.h>

char* Englishword(int number)
{

    if(number==1)
    {   
        return "one";
    }
    else if(number==2)
    {
        return "two";
    }
    else if(number==3)
    {
        return "three";
    }
    else if(number==4)
    {
        return "four";
    }
    else if(number==5)
    {
        return "five";
    }
    else if(number==6)
    {
        return "six";
    }
    else if(number==7)
    {
        return "seven";
    }
    else if(number==8)
    {
        return "eight";
    }
    else if(number==9)
    {
        return "nine";
    }

}
char* EvenorOdd(int number)
{
    if(number%2==0)
    {
        return "even";
    }
    else
    {
        return "odd";
    }
}

int main()
{
    int number[3];
    char *word;
    char *answer;
    int i=0;

    printf("enter two numbers");
    for(i=0;i<2;i++)
    {
         scanf("%d",&number[i]);
    }
    for(i=0;i<2;i++)
    {
        if(number[i]<9)
        {
            word=Englishword(number[i]);
            printf("%s\n",word);
        }
        else
        {
            answer=EvenorOdd(number[i]);
            printf("%s\n",answer);
        }
    }
}





