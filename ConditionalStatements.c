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
    if(number==3)
    {
        return "three";
    }
    if(number==4)
    {
        return "four";
    }
    if(number==5)
    {
        return "five";
    }
    if(number==6)
    {
        return "six";
    }
    if(number==7)
    {
        return "seven";
    }
    if(number==8)
    {
        return "eight";
    }
    if(number==9)
    {
        return "nine";
    }

}

int main()
{
    int number;
    char *word;

    printf("enter a number");
    scanf("%d",&number);

    if(number<=9)
    {
        word=Englishword(number);
        printf("%s",word);
    }
    else
    {
        printf("number greater than 9");
    }
}

