#include<stdio.h>
#include<conio.h>
void main()
{
int x,a,sum=0;
printf("Enter an integer: ");
scanf("%d",&x);
while(x>0)
{
a=x%10;
sum+=a;
x/=10;
}
printf("The sum of the digits is %d",sum);
getch();
}
