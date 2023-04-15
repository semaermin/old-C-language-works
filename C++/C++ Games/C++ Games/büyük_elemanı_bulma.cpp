#include <stdio.h>
#include <stdlib.h>
#include <time.h>
 
#define      SIZE      40
 
int main()
{
   int a[SIZE];
   int k;
 
   srand(time(0));
   for (k = 0; k < SIZE; ++k) {
      a[k] = rand() % 500;
      if (k % 20 == 0 && k)
         putchar('\n');
      printf("%3d ", a[k]);
   }
   putchar('\n');
   /*
   yazacaginiz kod parçasi
   */
   return 0;
}
