#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n,i;
    int c = 0;

    printf("Enter a number : ");
    scanf("%d",&n);

    if (n==0 || n==1)
    {
        c=1;
    }    
    for (i = 2; i <= n / 2; ++i) 
    {
    if (n % i == 0) 
    {
      c = 1;
    }
  }
  if (c == 0)
    printf("%d is a prime number.", n);
  else
    printf("%d is not a prime number.", n);

}
