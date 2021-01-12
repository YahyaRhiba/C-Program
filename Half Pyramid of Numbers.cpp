#include<stdio.h>
#include<conio.h>  
main() {
   int i, j, line;
   printf("Enter the number of line: ");
   scanf("%d", &line);
   for (i = 1; i <= line; ++i) {
      for (j = 1; j <= i; ++j) {
         printf("%d ", j);
      }
      printf("\n");
   }
   getch();
}
