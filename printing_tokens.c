#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    char *string;
    int i=0;//i is index 

    string=malloc(1000*sizeof(char));
    scanf("%[^\n]s",string);

    while(*(string+i)!='\0')
    {   
        if(*(string+i)!=' ')//if not blank space print thr character
        {
        printf("%c",*(string+i));
        i++;
        }
        else
        {
            printf("\n");
            i++;
        }
    }
        
    
}
   
