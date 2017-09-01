#include<stdio.h>
#include<conio.h>
Void main()
{
int a,b,n=1;
scanf("%d",a);
for(i=0;i<n;i++)
{
b=a%10;
a=a/10;
printf("%d",b);
n=n+1;
}
}

