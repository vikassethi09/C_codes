#include<stdio.h>
#include<conio.h>
int main()
{
int a, b,c;
printf("Enter the value of first element\n");
scanf("%d",&a);
printf("enter the value of second element\n");
scanf("%d",&b);
printf("enter the value of third element\n");
scanf("%d",&c);
if(a>b&&a>c)
printf("The largest number is %d",a);
else
if(b>c)
printf("the largest number is %d",b);
else
printf("the largest number is %d",c);
getch();
}

