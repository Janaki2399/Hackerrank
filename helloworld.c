#include<stdio.h>
#include<string.h>

int main()
{
    char string[30]; //declaring an array named string of length 30
    int i;

    scanf("%[^\n]s",string);

    printf("Hello, World!\n");
    printf("%s",string);    
}

