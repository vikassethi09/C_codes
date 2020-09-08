#include<stdio.h>
#include<conio.h>
void main()
{
    int a[100],n,i,search;
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
printf("enter the value you want to search\n");
scanf("%d",&search);
for(i=0;i<n;i++)
{
    if(a[i]==search)
    {
        printf("the value location is %d\n",i++);
        break;
    }
}
if(i>n)
    printf("element is not found");
getch();
}
