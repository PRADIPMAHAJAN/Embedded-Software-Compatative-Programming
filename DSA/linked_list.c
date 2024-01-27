/*Linked List is a linear data structure, in which elements are not stored at a contiguous location, rather they are linked using pointers. Linked List forms a series of connected nodes, 
where each node stores the data and the address of the next node. 
1. Need more memory because data and address of next node.
2. 
*/

#include <stdio.h>
#include <stdlib.h>

// Define the structure for a node
struct Node {
    int data;
    struct Node* next;
};

int main() {
    // Create the first node
    struct Node* head = (struct Node*)malloc(sizeof(struct Node));
    
    if (head == NULL) {
        printf("Memory allocation failed\n");
        exit(1);
    }

    head->data = 1;
    head->next = NULL;

    // Create the second node
    struct Node* secondNode = (struct Node*)malloc(sizeof(struct Node));
    
    if (secondNode == NULL) {
        printf("Memory allocation failed\n");
        exit(1);
    }

    secondNode->data = 2;
    secondNode->next = NULL;

    // Create the third node
    struct Node* thirdNode = (struct Node*)malloc(sizeof(struct Node));
    
    if (thirdNode == NULL) {
        printf("Memory allocation failed\n");
        exit(1);
    }

    thirdNode->data = 3;
    thirdNode->next = NULL;

    // Connect the nodes: head -> second -> third
    head->next = secondNode;
    secondNode->next = thirdNode;

    // Display the linked list
    struct Node* current = head;
    while (current != NULL) {
        printf("%d -> ", current->data);
        current = current->next;
    }
    printf("NULL\n");

    // Free the memory allocated for the linked list
    free(head);
    free(secondNode);
    free(thirdNode);

    return 0;
}