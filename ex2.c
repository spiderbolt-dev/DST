/*
 * Ex. No.: 02 - LINKED LIST
 * 
 * Aim:
 * To create a singly linked list and insert a new node at a specific position
 * 
 * Algorithm:
 * 1. Start the program. 
 * 2. Create three nodes and assign values to them. 
 * 3. Create a new node with the value to be inserted. 
 * 4. Link the first, second, and third nodes. 
 * 5. Insert the new node between the second and third nodes. 
 * 6. Display the updated linked list. 
 * 7. Stop the program.
 */

#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

int main()
{
    struct node *head, *second, *third, *newnode;

    // Create first node
    head = (struct node *)malloc(sizeof(struct node));
    head->data = 20;

    // Create second node
    second = (struct node *)malloc(sizeof(struct node));
    second->data = 30;

    // Create third node
    third = (struct node *)malloc(sizeof(struct node));
    third->data = 40;

    // Create new node
    newnode = (struct node *)malloc(sizeof(struct node));
    newnode->data = 25;

    // Original Linked List
    head->next = second;
    second->next = third;
    third->next = NULL;

    // Insert new node at specific position
    second->next = newnode;
    newnode->next = third;

    // Display Linked List
    printf("Linked List after insertion:\n");
    while(head != NULL)
    {
        printf("%d -> ", head->data);
        head = head->next;
    }
    printf("NULL\n");

    return 0;
}
