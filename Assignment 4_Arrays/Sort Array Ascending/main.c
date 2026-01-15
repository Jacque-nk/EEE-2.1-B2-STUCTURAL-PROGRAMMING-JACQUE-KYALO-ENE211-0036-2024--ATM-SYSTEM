#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[100], n, i, j, num;

    printf("Input the size of array : ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("element - %d : ", i);
        scanf("%d", &arr[i]);
    }

    // Sorting in ascending order
    for (i = 0; i < n - 1; i++) {
        for (j = i + 1; j < n; j++) {
            if (arr[i] > arr[j]) {
                num = arr[i];
                arr[i] = arr[j];
                arr[j] = num;
            }
        }
    }

    printf("Elements of array in sorted ascending order: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
