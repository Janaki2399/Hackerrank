#include<stdio.h>
#include<stdlib.h>

int main()
{
        int n,i;
        int sum=0;

       
        scanf("%d",&n);
        int *array =(int*)malloc(n * sizeof(int));//dynamically allocating memory for the array
        
        
        for(i=0;i<n;i++)
        {
            scanf("%d",array+i);//storing the values in the address location

        }
        for(i=0;i<n;i++)
        {
            sum+=*(array+i);//calculating the sum using the values in that address location
        }
        printf("%d",sum);
}
