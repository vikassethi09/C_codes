#include<stdio.h>
#include<conio.h>
void main()
{
int i,n,f;
f=i=1;
printf("enter the value of number whose factorial is to be calculated");
scanf("%d",&n);
while(i<=n)
{
    f=f*i;
    i++;
}
printf("the factorial of %d is %d",n,f);
getch();
}
