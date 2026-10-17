/*
 * Ex. No.: 08 - SELECTION SORT
 * 
 * Aim:
 * To sort a set of numbers in ascending order using the Selection Sort algorithm in C programming.
 * 
 * Procedure:
 * 1. Start the program.
 * 2. Read the number of elements and the array values.
 * 3. Find the smallest element in the unsorted part of the array.
 * 4. Swap it with the first unsorted element.
 * 5. Repeat the process for the remaining elements.
 * 6. Display the sorted array.
 * 7. Stop the program.
 */

#include <stdio.h>

int main()
{
    int a[10], n, i, j, min, temp;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    // Selection Sort
    for(i = 0; i < n - 1; i++)
    {
        min = i;
        for(j = i + 1; j < n; j++)
        {
            if(a[j] < a[min])
                min = j;
        }
        temp = a[i];
        a[i] = a[min];
        a[min] = temp;
    }

    printf("Sorted Array:\n");
    for(i = 0; i < n; i++)
        printf("%d ", a[i]);
    printf("\n");

    return 0;
}
