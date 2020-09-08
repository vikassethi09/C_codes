#include<stdio.h>
void main()
{
	int a,b;
	printf("enter the value of a\n");
    scanf("%d",&a);
	printf("enter the value of b\n");
    scanf("%d",&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("swaped values are a=%d\n b=%d\n",a,b);
	getch();
}
