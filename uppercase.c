#include <stdio.h>

int main()
{
    char ch;
    printf("Enter an alphabet : ");
    scanf("%c",&ch);

    if (ch >= 'a' && ch <= 'z')
    {
        ch = ch - ('a' - 'A');
        printf("Uppercase : %c \n",ch);
    }
    else if (ch >= 'A' && ch <= 'Z')
    {
        printf("Already Uppercase : %c \n",ch);
    }
    else 
    {
        printf("Not a valid alphabet \n");
    }
    
}
