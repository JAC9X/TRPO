#include <stdio.h>
#include <stdlib.h>
 
int main(void)
{
   int n;
   float a,b;
   printf("Menu:\n1 - a+b\n2 - a-b\n3 - a*b\n4 - a/b\n") ;
   scanf ("%d", &n);
   printf("Enter a and b\n");
   scanf("%f%f", &a, &b);
   switch (n) {
   case 1:
       printf("%0.1f\n",a+b) ;
       break;
   case 2:
       printf("%0.1f\n",a-b) ;
       break;
   case 3:
       printf("%0.1f\n",a*b) ;
       break;
   case 4:
       printf("%0.1f\n",a/b) ;
       break;
   }
   system("pause");
   return 0;
}