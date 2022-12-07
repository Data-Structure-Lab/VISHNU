#include<stdio.h>
void main()
{
int a[3]={1,2,3};
int b[10],i;
printf("Enter the value for array b\n");
for(i=0;i<10;i++)
{
	b[i]=i;
}
printf("value in a[2]=%d",a[2]);
printf("\nvalue in array b =");
for(i=0;i<10;i++)
printf("%d\n",b[i]);
}
