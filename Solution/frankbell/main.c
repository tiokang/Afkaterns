#include <stdio.h>
#include <stdlib.h>
int main()
{
long factorial(int);
int i,a,n;//initialise variables
  //print the number of rows
  printf("enter the number of rows: \n");
  scanf("%d",&n);
for(i = 0; i < n; i++){
     for(a = 0;a <= (n - i - 2); a++)
     printf("");
     }

 for(a = 0; a <= i; a++){
         printf("%ld", factorial(i)/(factorial(a)*factorial(i-a)));
 printf("\n");
    }
         return 0;
 }
long result = 1;
   int a;
    for(a = 1; a <= n; a++)
    {
 result = result*a;
    }
          return results;
 }

