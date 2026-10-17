/*
 * Ex. No.: 06 - HEAP SORT
 * 
 * Aim:
 * To sort a set of numbers using the Heap Sort algorithm in C programming.
 * 
 * Procedure:
 * 1. Start the program.
 * 2. Read the array elements.
 * 3. Build a max heap from the array.
 * 4. Swap the first element with the last element.
 * 5. Reduce the heap size and rebuild the heap.
 * 6. Repeat until all elements are sorted.
 * 7. Display the sorted array and stop.
 */

#include <stdio.h>

void heapify(int a[], int n, int i)
{
    int largest = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;
    int temp;

    if(left < n && a[left] > a[largest])
        largest = left;

    if(right < n && a[right] > a[largest])
        largest = right;

    if(largest != i)
    {
        temp = a[i];
        a[i] = a[largest];
        a[largest] = temp;

        heapify(a, n, largest);
    }
}

int main()
{
    int a[10], n, i, temp;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    // Build Max Heap
    for(i = n / 2 - 1; i >= 0; i--)
        heapify(a, n, i);

    // Heap Sort
    for(i = n - 1; i > 0; i--)
    {
        temp = a[0];
        a[0] = a[i];
        a[i] = temp;

        heapify(a, i, 0);
    }

    printf("Sorted Array:\n");
    for(i = 0; i < n; i++)
        printf("%d ", a[i]);
    printf("\n");

    return 0;
}
