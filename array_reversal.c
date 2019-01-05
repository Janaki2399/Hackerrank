#include <stdio.h>
#include <stdlib.h>

int main() {
  int i, j; // indices for the array
  int number_of_elements;
  int temp[20];
  scanf("%d", &number_of_elements);
  int *array = (int *)malloc(number_of_elements * sizeof(int));
  int mid;
    
  
  for (i = 0; i < number_of_elements; i++) {
    scanf("%d", array + i);
  }
    if(number_of_elements%2!=0)
    {
      mid = number_of_elements / 2;
      for (i = 0, j = number_of_elements - 1; i<mid, j> mid; i++, j--) {
        temp[i] = *(array + i);
        *(array + i) = *(array + j);
        *(array + j) = temp[i];
  }
  }
  else
    {
        mid=number_of_elements/2;        
        for (i = 0, j = number_of_elements - 1; i<= mid, j>=mid; i++, j--)
         {

                temp[i] = *(array + i);
                *(array + i) = *(array + j);
                *(array + j) = temp[i];
        }
  }
  for (i = 0; i < number_of_elements; i++) {
    printf("%d ", *(array + i));
  }
  free(array);
}


