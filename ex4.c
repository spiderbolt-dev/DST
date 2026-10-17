/*
 * Ex. No.: 04 - QUEUE
 * 
 * Aim:
 * To implement a Queue using an Array and perform Enqueue and Dequeue operations using the C programming language.
 * 
 * Procedure:
 * 1. Start the program. 
 * 2. Declare an array to represent the queue and initialize front and rear. 
 * 3. Insert elements into the queue using the Enqueue operation. 
 * 4. Display the queue. 
 * 5. Remove one element using the Dequeue operation. 
 * 6. Display the updated queue. 
 * 7. Stop the program.
 */

#include <stdio.h>

int main()
{
    int queue[5], front = 0, rear = -1, i;

    // Enqueue Operation
    queue[++rear] = 10;
    queue[++rear] = 20;
    queue[++rear] = 30;

    printf("Queue after Enqueue:\n");
    for(i = front; i <= rear; i++)
    {
        printf("%d ", queue[i]);
    }

    // Dequeue Operation
    printf("\n\nDequeued Element = %d\n", queue[front]);
    front++;

    printf("\nQueue after Dequeue:\n");
    for(i = front; i <= rear; i++)
    {
        printf("%d ", queue[i]);
    }

    return 0;
}
