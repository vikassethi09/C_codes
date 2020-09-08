#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
    int x,i,f;
    f=i=1;
    printf("enter the value of number to find factorial");
    scanf("%d",&x);
    while(i<=x)
    {
    f=f*i;
    i++;
    }
    printf("the factorial of %d is %d",x,f);
getch();
}
