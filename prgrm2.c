#include <stdio.h>
int myFunction(int a,int b)
{
int c;
c=a+b;
return (c);
}
int main()
{
int a,b;
printf("enter first number:");
scanf("%d",&a);
printf("enter second number:");
scanf("%d",&b);
int result = myFunction (a,b);
printf("Result is = %d \n",result);
return 0;
} 
