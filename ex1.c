/*
 * Ex. No.: 01 - ARRAY OPERATIONS
 * 
 * Aim:
 * To perform basic array operations (Display, Insert, Delete, and Modify).
 * 
 * Procedure:
 * 1. Start the program. 
 * 2. Read the array elements. 
 * 3. Display the original array. 
 * 4. Add a new element at the end of the array. 
 * 5. Remove the last element from the array. 
 * 6. Change the value of an existing element. 
 * 7. Display the updated array and stop.
 */

#include <stdio.h>

int main()
{
    int a[10], n, i;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("\nOriginal Array: ");
    for(i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    a[n] = 60; /* Insert Operation */
    n++;

    printf("\nAfter Insertion: ");
    for(i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    n--; /* Delete Operation */

    printf("\nAfter Deletion: ");
    for(i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    a[1] = 99; /* Modify Operation */

    printf("\nAfter Modification: ");
    for(i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}
