#include <stdio.h>
#include <string.h>
int main()
{	
	int i,max=300;
	char str[max];
	
	printf("Enter the string : ");
	fgets(str,max,stdin);
	
	for(i=0; str[i]!='\0'; ++i);
		printf("Length of the string is : %d",i-1);
	
	
}
