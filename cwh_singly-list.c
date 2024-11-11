#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node* next;
};
/*
            INSERTION   
*/
int insertion_at_beginning(struct node* head, int data){
    struct node* temp = (struct node*)malloc(sizeof(struct node));
    if (head == NULL)
    {
        head = temp;
        printf("\nData Inserted!\n");
    }
    else
    {
        temp -> data = data;
        temp -> next = head;
        head = temp;
        printf("Data Inserted!\n");
    }
    return head;
}

int insert_at_index(struct node* head,int data,int index){
    struct node* temp = (struct node*)malloc(sizeof(struct node));
    struct node* start = head;
    for (int i = 0; i != index-1 ; i++)
    {
        start = start ->next;
    }
    temp ->data = data;
    temp ->next = start->next;
    start ->next = temp;
    printf("Data inserted at desired index!\n");
    return head;  
}

int insertion_at_end(struct node* head,int data){
    struct node* temp = (struct node*)malloc(sizeof(struct node));
    temp->data = data;
    temp->next = NULL;
    if (head ==NULL)
    {
        temp = head;
    }
    else
    {
        struct node* end = head;
        while (end ->next != NULL)
        {
            end = end ->next;
        }
        end ->next = temp;
    }
    printf("Data inserted!\n");
    return head;
}
/*
            DELETION
*/
int deletion_at_start(struct node* head){
    struct node* temp = head;
    head = head ->next;
    free(temp);
    printf("Data deleted!\n");
    return head;
}

int deletion_at_index(struct node* head,int index){
    struct node* temp1 = head;
    struct node* temp2 = head->next;
    for (int i = 0; i < index - 1; i++)
    {
        temp1 = temp1 ->next;
        temp2 = temp2 ->next;
    }
    temp1->next = temp2->next;
    free(temp2);
    printf("Data deleted at index %d!\n",index);
    return head;
}

int deletion_at_end(struct node* head){
    struct node* temp1 = head;
    struct node* temp2 = head->next;
    while (temp2->next != NULL)
    {
        temp1 = temp1->next;
        temp2 = temp2->next;
    }
    free(temp2);
    temp1 -> next = NULL;
    printf("Data deleted at end!\n");
    return head;
}

int delete_value(struct node*head,int data){
    struct node* temp1 = head;
    struct node* temp2 = head->next;
    while (temp2->data != data && temp2->next != NULL)
    {
        temp1 = temp1->next;
        temp2 = temp2->next;
    } 
    if (temp2->data == data)
    {
        temp1->next = temp2->next;
        free(temp2);
    }
    else printf("Reached the end of list, no data founded!\n");
    printf("Entered data %d deleted!\n",data);
    return head;
}
/*
            NODE COUNT
*/
int node_count(struct node* head){
    int count = 1;
    struct node* temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
        count++;
    }
    return count;
}
/*
            SEARCHING   
*/
int search(struct node* head,int data){
    int index = 1;
    struct node* temp = head;
    while (temp->data != data && temp->next != NULL)
    {
        temp = temp->next;
        index++;
    }
    if (temp->data == data)
    {
        printf("Element found at index %d \n",index);
    }
    else printf("Element not found in the list \n");
}
/*
            REVERSE
*/
int reverse(struct node* head){
    struct node* temp = head;
    struct node* reverse = head->next;
    head = head->next;
    temp->next = NULL;
    while (head != NULL)
    {
        head = head->next;
        reverse->next = temp;
        temp = reverse;
        reverse = head;
    }
    head = temp;
    return head;
}
/*
            TRAVERSE
*/
int traverse(struct node* head, struct node* print){
    print = head;
    while (print != NULL)
    {
        printf("%d ",print -> data);
        print = print ->next;
    }    
}

int main()
{
    int n,data,index,count;
    printf("Enter the number of values : ");
    scanf("%d",&n);

    // creation of head and newnode
    struct node* head,*newnode,*temp;
    head = (struct node*)malloc(sizeof(struct node));
    temp = (struct node*)malloc(sizeof(struct node));
    head = NULL;

    // adding data to list
    for (int i = 0; i < n; i++)
    {
        newnode = (struct node*)malloc(sizeof(struct node));
        printf("Enter data : ");
        scanf("%d",&newnode->data);
        newnode -> next = NULL;
        if (head == NULL)
        {
            head = temp = newnode;
        }
        else{ 
            temp -> next = newnode;
            temp = newnode;
        }
    }
    
    int choice = 0;
    printf("Enter your choice : ");
    scanf("%d",&choice);
    switch (choice)
    {
    case 1: // Insertion at first position
        printf("Enter data to add at first : ");
        scanf("%d",&data);
        head = insertion_at_beginning(head,data);
        break;
    
    case 2: // Insertion at specific position
        printf("Enter data and index to be added : ");
        scanf("%d %d",&data,&index);
        head = insert_at_index(head,data,index);
        break;

    case 3: // Insetion at last position
        printf("Enter data to add at last : ");
        scanf("%d",&data);
        head = insertion_at_end(head,data);
        break;
    
    case 4: // Deletion at first
        head = deletion_at_start(head);    
        break;
    
    case 5: // Deletion at index
        printf("Enter the index to delete element at : ");
        scanf("%d",&index);
        head = deletion_at_index(head,index);    
        break;
    
    case 6: // Deletion at last
        head = deletion_at_end(head);    
        break;
    
    case 7: // Deleting specific value
        printf("Enter the data to delete : ");
        scanf("%d",&data);
        head = delete_value(head,data);    
        break;

    case 8: // Counting the number of nodes
        count = node_count(head);
        printf("Number of nodes present in the list is : %d",count);
        break;

    case 9: // Searching an element in a linked list
        printf("Enter the data to search : ");
        scanf("%d",&data);
        search(head,data);
        break;

    case 10: // Reverse
        printf("List reversed!");
        head = reverse(head);
        break;

    default:
        break;
    }

    // printing the data
    traverse(head,temp);  
}
