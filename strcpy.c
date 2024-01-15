#include <stdio.h>
#include <string.h>

int main()
{
	int max,i;
	char src[max],dest[max];
	
	printf("Enter a string : ");
	
	scanf("%s",src);
	
	for(i=0; src[i]!= '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i]='\0';
	
	printf("The copied string is : ");
	fputs(dest,stdout);
	
}
