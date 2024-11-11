#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node* next;
};

int traverse(struct node* head){
    struct node* print;
    print = head;
    do{
        printf("%d ",print -> data);
        print = print ->next;
    } while (print != head);   
    //printf("%d",print->data);
}

int main()
{
    int n,data;
    struct node* head, *newnode, *temp;
    head = (struct node*)malloc(sizeof(struct node));
    temp = (struct node*)malloc(sizeof(struct node));
    head = NULL;

    printf("Enter the number of values : ");
    scanf("%d",&n);
    
    for (int i = 0; i < n; i++)
    {
        newnode = (struct node*)malloc(sizeof(struct node));
        printf("Enter Data : ");
        scanf("%d",&newnode->data);
        newnode->next = head;
        if (head == NULL)
        {
            head = newnode;
        }
        else
        {
            temp->next = newnode;
            temp = newnode;
        }    
    }
    traverse(head);
}
