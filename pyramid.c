#include <stdio.h>
void main() 
{
   int i, j, p;
   printf("Enter the number of lines: ");
   scanf("%d", &p);
   for (i = 1; i <= p; ++i) {
      for (j = 1; j <= i; ++j) {
         printf("x");
      }
      printf("\n");
   }
}
