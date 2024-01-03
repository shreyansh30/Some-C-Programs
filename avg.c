#include <stdio.h>

int main()
{
    int m,p,e,c,b;
    float a,o,per;
    printf("Marks obtained in Maths : ");
    scanf("%d",&m);

    printf("Marks obtained in Physics : ");
    scanf("%d",&p);

    printf("Marks obtained in EVS : ");
    scanf("%d",&e);

    printf("Marks obtained in Computer Science : ");
    scanf("%d",&c);

    printf("Marks obtained in Biology : ");
    scanf("%d",&b);

    o = (m+p+e+c+b);
    a = o/5;
    per = ((float)o / 1000)*100.0;

    printf("Average marks obtained is : %f\n",a);
    printf("Percentage obtained is : %.2f",per);
}
