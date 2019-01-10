#include<stdio.h>
int main()
{
    int number;
    int n,m,p,r,s;//variables to store the copy of the number
    int i,j;//indices for the array 'array'
    int k=1,q=1,x=1,y=1;

    printf("enter the number");
    scanf("%d",&number);//1<number<1000

    n=number+(number-1);//n is the number of rows and coloums

    m=p=r=s=number;
    
    int array[2*number][2*number];//declaring a two dimensional array

    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            array[i][j]=number;
        }
    }

    //for each row traversing through the coloumns untill 'number' rows
    for(i=2;i<=number;i++)
    {
        //traversing through the first part  of the coloumns
        for(j=2;j<i;j++)
        {
            array[i][j]=p-k;
            k++;
            
        }

        //traversing through the middle part of the coloumns
        for(j=i;j<=n-(i-1);j++)
        {
            array[i][j]=m-1;
        }
         m=m-1;
         k=1; 

         //traversing through the last part of the coloumns
         for(j=n-1;j>n-(i-1);j--)
         {
             array[i][j]=r-q;
             q++;
         }
         q=1;
             
    }
    //traversing backwards untill 'number' rows
    for(i=n-1;i>number;i--)
    {
        for(j=n-1;j>i;j--)
        {
            array[i][j]=p-x;
            x++;
        }
    
                
        for(j=i;j>=n-(i-1);j--)
        {
            array[i][j]=r-1;
        }
         r=r-1;
         x=1;
         
         for(j=2;j<n-(i-1);j++)
         {
             array[i][j]=s-y;
             y++;
         }
         y=1;
    }

    // to print the array
     for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            printf("%d",array[i][j]);
        }
        printf("\n");
    }

}

    

