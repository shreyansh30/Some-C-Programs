#include <stdio.h>

int main()
{
    char a;
    printf("Enter an alphabet : ");
    scanf("%c",&a);
    
    char lv = (a=='a'||a=='e'||a=='i'||a=='o'||a=='u');
    char uv = (a=='A'||a=='E'||a=='I'||a=='O'||a=='U');
    
    if (lv || uv)
    printf("%c is Vowel",a);

    else
    printf("%c is Consonant",a);
}
