#include <stdio.h>
#include <string.h>

int main()
{
	int i,max=30;
	char str[max];

	printf("Enter the String : ");
	fgets(str,max,stdin);
	
	int len = strlen(str);
	for (i = 0; i < len-1 ; i++)
	{
		if (i == len)
		{
			printf("%c",str[i]);
		}

		if (str[i]=' ')	
		{
			printf("%c",str[i-1]);
		}	
	}	
}
