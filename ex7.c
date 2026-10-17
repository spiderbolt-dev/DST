/*
 * Ex. No.: 07 - INSERTION SORT
 * 
 * Aim:
 * To write a C program to sort the given elements in ascending order using the Insertion Sort.
 * 
 * Procedure:
 * 1. Start the program. 
 * 2. Read the number of elements (n). 
 * 3. Read the array elements. 
 * 4. Select one element as the key. 
 * 5. Compare the key with the previous elements. 
 * 6. Insert the key in its correct position. 
 * 7. Display the sorted array and stop the program.
 */

#include <stdio.h>

int main()
{
    int a[10], n, i, j, key;

    printf("Enter n: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    for(i = 1; i < n; i++)
    {
        key = a[i];
        j = i - 1;

        while(j >= 0 && a[j] > key)
        {
            a[j + 1] = a[j];
            j--;
        }
        a[j + 1] = key;
    }

    printf("Sorted elements:\n");
    for(i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");

    return 0;
}
