#include<stdio.h>
#include<string.h>

int main()
{   char character;
    char word[10];
    char sentence[30]; 
    
    scanf("%c",&character);//reads a character
    scanf("%s\n",word);//reads a words
    scanf("%[^\n]s",sentence);//reads a sentence

    printf("%c\n",character);//prints the  character
    printf("%s\n",word);//prints the word
    printf("%s\n",sentence); //prints the sentence   
}

