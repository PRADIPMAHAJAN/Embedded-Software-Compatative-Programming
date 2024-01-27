#include<stdio.h>
#include<stdlib.h>


struct Node{
  int data;
  struct Node *next;
};

struct Node *insertatbegin(int data, struct Node *head)
{
  struct Node *newnode = (struct Node*)malloc(sizeof(struct Node));

  if(newnode == NULL)
  {
    printf("memory allocation failed\n");
  }

  newnode->data = data;
  newnode->next = head;
  head = newnode;

  return head;
}

// Insert node at the end of the linked list.

struct Node *Insert_at_End(int data, struct Node *head)
{
  struct Node *newnode = (struct Node*) malloc (sizeof(struct Node));

  if(newnode == NULL)
  {
    printf("Memory allocation failed\n");
    return head;
  }

  newnode->data = data;
  newnode->next = NULL;

  if(head == NULL)
  {
    head = newnode; //If linked list is empty.
  }
  else
  {

    // Traverse untill end of the linked list.
    struct Node *current = head;
    while(current->next != NULL)
    {
      current = current->next;
    }

    //Insert the new node at the end 
    current->next = newnode;

  }
  return head;
}

struct Node* reverseLinkedList(struct Node *head)
{
  struct Node *prev = NULL;
  struct Node *current = head;
  struct Node *nextNode = NULL;

  while (current != NULL)
  {
    nextNode = current->next;
    current->next = prev;
    prev = current;
    current = nextNode;
  }

  // 'prev' is the new head of the reversed linked list
  return prev;
}


void print_linked_list(struct Node *head)
{
  struct Node *current = head;

  while(current != NULL)
  {
    printf("%d ", current->data);
    current = current->next;
  }
  printf("\n");
}

int main()
{

  struct Node* head = NULL;

  head = insertatbegin(21, head);
  head = insertatbegin(22, head);
  head = insertatbegin(23, head);

  print_linked_list(head);

  head = Insert_at_End(32, head);
  head = Insert_at_End(33, head);
  head = Insert_at_End(35, head);

  print_linked_list(head);

  head = reverseLinkedList(head);


  print_linked_list(head);
  return 0;
}