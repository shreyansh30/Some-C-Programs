#include <stdio.h>

int check_fibonacci(int n)
{
    int val[10];
    int a,b,c;
    int flag =0;
    a=0;
    b=1;
    c=a+b;
    val[0]=a;
    val[1]=b;
    val[2]=c;

    for (int i = 3; i < n; i++)
    {
        a=b;
        b=c;
        c=a+b;
        val[i]=c;
    }

    for (int i = 0; i < n; i++)
    {    
        if (n==val[i])
        {
            flag = 1;
        }
        else
            flag=0;
    }

    if (flag==1)
    {
        printf("Number is in Fibonacci Sequence : Yes");
    }
    else
        printf("Number is in Fibonacci Sequence : No"); 
}

int main()
{
    int n;

    printf("The number to test whether it is in Fibonacci sequence or not: ");
    scanf("%d",&n);

    printf("Entered number : %d\n",n);

    check_fibonacci(n);
}
