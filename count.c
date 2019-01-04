//DIGIT FREQUENCY PROBLEM 

#include<stdio.h>
#include<string.h>
int main()
{
    char elements[50];
    int index=0;
    char number;
    int count=0;
    
    printf("enter the elements");
    scanf("%s",elements);

    for(number='0';number<='9';number++)
    {
        while(elements[index]!='\0')
        {
             if(elements[index]==number)
            {
                count++;
             }
            index++;
    
        }
        printf("%d",count);
        count=0;
        index=0;

    }

}
        
