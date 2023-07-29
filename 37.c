#include <stdio.h>
#include <stdlib.h>

int main()
{
char cha;
printf("Enter a character:");
scanf("%c",&cha);

switch(cha)
{

case 'a' : printf("%c is a vowel",cha);break;
case 'A' : printf("%c is a vowel",cha);break;
case 'e': printf("%c is a vowel",cha);break;
case 'E' : printf("%c is a vowel",cha);break;
case 'i' : printf("%c is a vowel",cha);break;
case 'I' : printf("%c is a vowel",cha);break;
case 'o' : printf("%c is a vowel",cha);break;
case 'O' : printf("%c is a vowel",cha);break;
case 'u' : printf("%c is a vowel",cha);break;
case 'U' : printf("%c is a vowel",cha);break;


default: printf(" %c is not a vowel",cha);
}

    return 0;
}
