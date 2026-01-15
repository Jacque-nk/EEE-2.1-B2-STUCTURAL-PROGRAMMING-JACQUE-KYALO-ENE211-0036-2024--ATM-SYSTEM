#include <stdio.h>
#include <stdlib.h>

int main()
{
  int n, i, sum = 0;
  int arr[100];

  //Number of arrays
  printf("\nPlease input number of elements you want to store in array: \n");
  scanf("%d", &n);

  //Number of elements
  printf("\nInput %d number of elements\n", n);
  for(i = 0; i < n; i++){
     printf("Element %d : ",i);
     scanf("%d", &arr[i]);
  }

  for(i = 0; i < n; i++){
    sum += arr[i];
  }

  //Sum of element
  printf("\nSum of all elements is: %d", sum);

    return 0;
}
