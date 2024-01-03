#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n,s,r;
    s=0;
    printf("Enter a number : ");
    scanf("%d",&n);

    for (;n!=0;n/=10) 
    {
        r = n%10;
        s = s*10+r;
    }
    printf("%d",s);
}
