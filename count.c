#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    char *elements;
    int index=0;
    char number;
    int count=0;

    elements=(char*)malloc(1000 *sizeof(char));
    printf("enter the elements");
    scanf("%s",elements);

    for(number='0';number<='9';number++)//iterating for the numbers from 0-9
    {
        while(elements[index]!='\0')
        {
             if(elements[index]==number)//comparing each element in the array with the number 
            {
                count++;//if equal the count of that number increases
             }
            index++;
    
        }
        printf("%d",count);//printing the count
        count=0;//reinitializing the count to 0 again.
        index=0;//to again iterate the array from the beggining

    }
    free(elements);
}
        
