#include <stdio.h>

char *Englishword(int number) {
  int n;
  char *words[] = {"one", "two",   "three", "four", "five",
                   "six", "seven", "eight", "nine"};
  
  
    return words[number - 1];
  
}
char *EvenorOdd(int number) {
  if (number % 2 == 0) {
    return "even";
  } else {
    return "odd";
  }
}

int main() {
  int number[3];
  char *word;
  char *answer;
  int i = 0;

  
  for (i = 0; i < 2; i++) {
    scanf("%d", &number[i]);
  }
  for (i = 0; i < 2; i++) {
    if (number[i] < 9) {
      word = Englishword(number[i]);
      printf("%s\n", word);
    } else {
      answer = EvenorOdd(number[i]);
      printf("%s\n", answer);
    }
  }
}






