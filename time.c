#include <stdio.h>

int main()
{
    int hour,min,sec,isec,rsec;
    printf("Enter time in seconds : ");
    scanf("%d",&isec);

    hour = isec/3600;
    rsec = isec - (hour*3600);
    min = rsec / 60;
    rsec = rsec - min*60;
    sec = rsec;

    printf("%d hour, %d minutes and %d seconds",hour,min,sec);
}
