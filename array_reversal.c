#include<stdio.h>
#include<stdlib.h>

int main()
{
    int i,j;//indices for the array
    int number_of_elements;
    int temp;
    printf("enter the number of elements in the array");
    scanf("%d",&number_of_elements);
    int *array=(int*)malloc(number_of_elements*sizeof(int));

    printf("enter the elements");
    for(i=0;i<number_of_elements;i++)
    {
        scanf("%d",array+i);
    }

    for(i=0,j=number_of_elements-1;i<number_of_elements,j>0;i++,j--)
    {
        temp=*(array+i);
        *(array+i)=*(array+j);
       *(array+j)=temp;
    }
    for(i=0;i<number_of_elements;i++)
    {
        printf("%d",*(array+i));
    }
}

            

