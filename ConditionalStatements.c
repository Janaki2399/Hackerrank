#include<stdio.h>
int main()
{
    int n;
    char *words[]={"one","two","three","four","five","six","seven","eight","nine"};
    scanf("%d",&n);
    if(n<9)
    {
        printf("%s",words[n-1]);
    }
    else {
     printf("Greater than 9");   
    }
}



