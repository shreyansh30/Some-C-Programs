#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n1,n2,n3,n4,n5,n6,n7,n8,n9,n0;

    printf("Enter 10 numbers : ");
    scanf("%d %d %d %d %d %d %d %d %d %d",&n0,&n1,&n2,&n3,&n4,&n5,&n6,&n7,&n8,&n9);

    float s = n0+n1+n2+n3+n4+n5+n6+n7+n8+n9;
    float a = s/10; 
    printf("The sum is %f and The average is %f",s,a);

}