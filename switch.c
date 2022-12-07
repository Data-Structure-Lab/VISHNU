#include <stdio.h>
int main()
{
 char operation;
 double n1,n2;
 printf("enter the operator(+,-,*,/):");
 scanf("%c",&operation);
 printf(" enter the operands");
 scanf("%lf %lf",&n1,&n2);
 switch(operation)
 {
 case'+': printf("%lf+%lf=%lf",n1,n2,n1+n2);
 break;
 case'-': printf("%lf-%lf=%lf",n1,n2,n1-n2);
 break;
 case'*': printf("%lf*%lf=%lf",n1,n2,n1*n2);
 break;
 case'/': printf("%lf/%lf=%lf",n1,n2,n1/n2);
 break;
 default: printf("error 404");
 }
return 0;
}
