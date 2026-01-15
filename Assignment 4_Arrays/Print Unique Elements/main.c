#include <stdio.h>
#include <stdlib.h>

int main()
{
   int n, i, j, count;
   int arr[100];
   int found = 0;   // check if any unique element exists

  //Number of arrays
  printf("\nPlease input number of elements you want to store in array: \n");
  scanf("%d", &n);

  //Number of elements
  printf("\nInput %d number of elements\n", n);
  for(i = 0; i < n; i++){
     printf("Element %d : ",i);
     scanf("%d", &arr[i]);
  }

  printf("The unique elements found in the array are: ");

  for(i = 0; i < n; i++){
      count = 0;
    for(j = 0; j < n; j++){
        if(arr[i] == arr[j]) {
            count++;
        }
    }
    if(count == 1){
       printf("%d ", arr[i]);
      found = 1;
    }

}

  if (found == 0){
        printf("None (All elements are repeated)");
    }
    return 0;
}
