#include<conio.h>
#include<stdio.h>
main()
{ 
 int n,i,j;
 printf("Nombres de lignes :  ");
 scanf("%d",&n);
 for (i=0;i<n;i++)
   {
    for (j=0;j<n-i-1;j++)
        printf(" ");
    for (j=0;j<2*i+1;j++)
        printf("*");
    printf("\n");
   }
  getch();
}
