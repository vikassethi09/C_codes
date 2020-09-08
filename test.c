#include<stdio.h>
#include<conio.h>
int f (int x, int y) {
  while (x < y) {
    printf("%d ", y - x);
    x = x + 1;
    y = y - 1;
  }
}
int main()
{
    int a;
        a=f(2,6);
        printf("%d",a);

getch();
return a;
}
