#include<stdio.h>
int main()
{
int a[10],n,sum =0;
printf("enter the num");
scanf("%d",&n);
printf("enter the array elements");

for(int i=0 ; i<n ; i++)
{
scanf("%d", &a[i]);
}

for(int i=0 ; i<n ; i++)
{
sum = sum + a[i];
}
 printf("%d",sum);
}
