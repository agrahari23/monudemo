#include<stdio.h>
#include<stdlib.h>
#include<string.h>



 void main()
{  struct node
    {
       int   data ;
       struct node * next;
    };

    struct node *head,*newnode,*temp;
    head=0;
    int choice;
     choice = 1 ;
    int  count =0;

    while(choice){

    newnode = (struct node *) malloc(sizeof(struct node));
    printf("enter the value to linked list:\n");
    scanf("%d",&(newnode->data));
    newnode->next=0;

    if(head == 0){
    head = newnode;
    temp=newnode;
    }
    else{
        temp->next = newnode;
        temp=newnode;

    }
    printf("enter choice 0 to end or 1 to write the more data");
    scanf("%d",&choice);
    
        
    }

    
    temp = head;

    while(temp != 0){
        printf("%d\n",temp->data);
        temp=temp->next;
        count++;
    }

/* explaination of the code*/
/*
**Linked List Implementation in C**

This C program demonstrates the implementation of a linked list, a fundamental data structure in computer science. It allows for efficient insertion, deletion, and traversal of data items.

**Step-by-Step Explanation:**

1. **Header Files:**
   ```c
   #include<stdio.h>
   #include<stdlib.h>
   #include<string.h>
   ```
   These header files provide essential functions and definitions for input/output operations, memory allocation, and string manipulation.

2. **Node Structure:**
   ```c
   struct node
   {
       int   data ;
       struct node * next;
   };
   ```
   This structure defines a node, the basic building block of a linked list. Each node consists of two fields:
   - `data`: Stores the actual data item.
   - `next`: A pointer to the next node in the list, or `NULL` if it's the last node.

3. **Global Variables:**
   ```c
   struct node *head,*newnode,*temp;
   head=0;
   int choice;
   int  count =0;
   ```
   - `head`: Pointer to the first node of the linked list, initially set to `NULL`.
   - `newnode`: Pointer used to create new nodes and add them to the list.
   - `temp`: Temporary pointer used for traversing the list.
   - `choice`: Variable used to control the program loop for adding nodes.
   - `count`: Variable to keep track of the number of nodes in the list.

4. **Main Function:**
   ```c
   void main()
   {
       // ...
   }
   ```
   This is the entry point of the program.

5. **Adding Nodes to the Linked List:**
   ```c
   while(choice){

       newnode = (struct node *) malloc(sizeof(struct node));
       printf("enter the value to linked list:\n");
       scanf("%d",&(newnode->data));
       newnode->next=0;

       if(head == 0){
           head = newnode;
           temp=newnode;
       }
       else{
           temp->next = newnode;
           temp=newnode;

       }
       printf("enter choice\n")
       scanf("%d",&choice);

   }



  */
    

    



}
