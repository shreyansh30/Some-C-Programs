#include <stdio.h>
#include <string.h>

int main()
{
	int i,max=30;
	char a[max];
		
	printf("Enter the string : ");
	//scanf("%s",a);
	
	//printf("%s",a);
	
	fgets(a,max,stdin);
	fputs(a,stdout);
	
}
