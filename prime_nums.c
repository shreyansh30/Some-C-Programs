#include <stdio.h>

int num_prime()

{
    int a=1,i,c=0;
    while (a<101)
    {
        for (i = 2; i <= a / 2; ++i) 
        {
            if (a % i == 0) 
            {
            c = 1;
            }
        }
        a++;
    }
    
    if (c==0)
    {
        printf("%d ",i);
    }
    
    
}

int main()
{
    printf("Prime numbers between 1 to 100 : \n");
    num_prime();
}
