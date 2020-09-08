#include<stdio.h>
#include<conio.h>
void main()
{
         int x,y;

        printf("Enter x\n ");

         scanf("%d",&x);

         y=(x==0)?0:((x>0)?1:-1);

          printf("y=%d",y);

          getch();
}
