#include<stdio.h>
#include<string.h>
int main()
{
char str[100];
 printf("Enter a string\n");
scanf("%s",str);
printf("%s\n",str);

int len,i;
len = strlen(str);
 for(i=len;i>=0;i--)
{
	printf("%c",*(str+i));
}



return 0;
}
