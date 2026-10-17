/*
 * Ex. No.: 03 - STACK USING ARRAY
 * 
 * Aim:
 * To implement a Stack using an Array and perform Push and Pop operations
 * 
 * Procedure:
 * 1. Start the program. 
 * 2. Declare an array to represent the stack and initialize top = -1. 
 * 3. Read the elements and perform the Push operation. 
 * 4. Display the stack after the Push operation. 
 * 5. Perform the Pop operation by removing the top element. 
 * 6. Display the stack after the Pop operation. 
 * 7. Stop the program.
 */

#include <stdio.h>

int main()
{
    int stack[5], top = -1, i;

    // Push Operation
    stack[++top] = 10;
    stack[++top] = 20;
    stack[++top] = 30;

    printf("Stack after Push:\n");
    for(i = top; i >= 0; i--)
    {
        printf("%d\n", stack[i]);
    }

    // Pop Operation
    printf("\nPopped Element = %d\n", stack[top]);
    top--;

    printf("\nStack after Pop:\n");
    for(i = top; i >= 0; i--)
    {
        printf("%d\n", stack[i]);
    }

    return 0;
}
