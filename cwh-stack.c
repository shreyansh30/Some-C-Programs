#include <stdio.h>
#include <stdlib.h>

int n;
int stack[];  //creation of array named stack
int top = -1;  //declaring top globally as -1 for empty stack

void push(int x){
    if (top == n-1)
    {
        printf("Overflow\n");
    }
    else 
    {
        top++;
        stack[top] = x;
    }
}

void pop(){
    if (top == -1)
    {
        printf("Underflow\n");
    }
    else 
    {
        top--;
        printf("Done!\n");
    }
}

void peek(){        //displays the top element of stack
    if (top == -1)
    {
        printf("Underflow\n");
    }
    else {
        printf("%d",stack[top]); 
    }
    printf("\n");
}

void display(){
    for (int i = 0; i < n; i++)
    {
        printf("%d ",stack[i]);
    }
    printf("\n");
}

int main()
{
    int choice,data;
    printf("Enter the number of values to enter in stack : ");
    scanf("%d",&n);
    for (int i = 0; i < n; i++)
    {
        printf("Enter data : ");
        scanf("%d",&data);
        push(data);
    }
    
    printf("MENU\n");
    printf("1. Push elements in stack\n");
    printf("2. Pop elements in stack\n");
    printf("3. Peek in stack\n");
    printf("4. Diplay elements of stack\n");
    printf("5. Exit\n");
    printf("--> ");
    scanf("%d",&choice);
    
    while (choice != 5)
    {
        switch (choice)
        {
        case 1:
            n++;
            printf("Enter the value to push in stack : ");
            scanf("%d",&data);
            push(data);
            printf("--> ");
            scanf("\n%d",&choice);
            break;
        case 2:
            pop();
            n--;
            printf("--> ");
            scanf("\n%d",&choice);
            break;
        case 3:
            peek();
            printf("--> ");
            scanf("\n%d",&choice);
            break;
        case 4:
            display();
            printf("--> ");
            scanf("\n%d",&choice);
            break;
        default:
            break;
        }    
    }
    
}
