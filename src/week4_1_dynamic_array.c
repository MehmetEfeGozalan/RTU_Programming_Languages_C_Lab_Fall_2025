/*
 * week4_1_dynamic_array.c
 * Author: [Mehmet Efe Gözalan]
 * Student ID: [250ADB111]
 * Description:
 *   Demonstrates creation and usage of a dynamic array using malloc.
 *   Students should allocate memory for an integer array, fill it with data,
 *   compute something (e.g., average), and then free the memory.
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int n;
    int *arr = NULL;

    printf("Enter number of elements: ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Invalid size.\n");
        return 1;
    }
     arr = (int *)malloc(n * sizeof(int));
    if (arr == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }
    printf("Enter %d integers:\n", n);
    for (int i = 0; i < n; i++) {
        if (scanf("%d", &arr[i]) != 1) {
            printf("Invalid input.\n");
            free(arr);  // Free before exiting
            return 1;
        }
    }
    long sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }
    double average = (double)sum / n;
    printf("Sum = %ld\n", sum);
    printf("Average = %.2f\n", average);
    free(arr);
    // TODO: Allocate memory for n integers using malloc
    // Example: arr = malloc(n * sizeof(int));

    // TODO: Check allocation success

    // TODO: Read n integers from user input and store in array

    // TODO: Compute sum and average

    // TODO: Print the results

    // TODO: Free allocated memory

    return 0;
}
