#include <stdio.h>

int main()
{
    int g;
    printf("Enter Marks obtained by student : ");
    scanf("%d",&g);
    
    if (g<40)
    {
   	 printf("Secured grade is F");
    }
    
    else if (g==40 && g>40 && g<49 && g==49)
    {
   	 printf("Secured grade is D");
    }
    
    else if (g==50 && g>50 && g<59 && g==59)
    {
   	 printf("Secured grade is C");
    }
    
    else if (g==60 && g>60 && g<69 && g==69)
    {
   	 printf("Secured grade is B");
    }
    
    else if (g==70 && g>70 && g<79 && g==79)
    {
   	 printf("Secured grade is A");
    }
    
    else if (g==80 && g>80 && g<89 && g==89)
    {
   	 printf("Secured grade is E");
    }
    
    
    else if (g==90 && g>90 && g<100 && g==100);
    {
   	 printf("Secured grade is O");
    }
}
