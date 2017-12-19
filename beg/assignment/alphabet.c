#include<stdio.h>
int main(void)
{
char s;
printf("enter the character");
scanf("%s",&s);
{
if((s>='a' && s<='z')||(s>='a' && s<='Z'))
printf("Alphabet");
else 
printf("Not an alphabet");
}

return 0;
}

