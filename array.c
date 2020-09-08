#include<stdio.h>
#include<conio.h>
void main()
{
    int a[10],n,i;
    printf("enter the size of array:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
    scanf("%d",&a[i]);
   }
    for(i=0;i<n;i++)
    {
    printf("%d\t",a[i]);
}
getch();
}
