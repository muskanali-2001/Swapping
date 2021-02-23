#include <stdio.h>
int main()
{
int x,y;
printf("before swapping\n");
printf("enter the value of x:");
scanf("%d",&x);
printf("enter the value of y:");
scanf("%d",&y);
x=x+y;
y=x-y;
x=x-y;
printf("after swapping\n");
printf("value of x:%d\n",x);
printf("value of y:%d",y);
}
