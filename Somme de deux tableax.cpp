#include<stdio.h>
#include<conio.h>
int main()
{
	int t1[50],i,t2[50],n,s[50];
	printf("Entrer  longueur (max est 50) de deux  tableaux : "); scanf("%d",&n);
	printf("\n\n\t\t\tEntrer tableaux number 1 de longueur %d\n",n);
	for(i=0;i<n;i++){
		printf("entrer t1[%d] :  ",i+1);
		scanf("%d",&t1[i]);
	}
	printf("\t\t\tEntrer tableux number 2 de longueur %d\n",n);
	for(i=0;i<n;i++){
		printf("entrer t2[%d] :  ",i+1);
		scanf("%d",&t2[i]);
	}
	
	printf("\t\t\tvotre deux tableaux est :  \n");
	for(i=0;i<n;i++){
		printf("| %d ",t1[i]);
		if(i==n-1){ 
		   printf("|");
		}
	}
	printf("\n");
	for(i=0;i<n;i++){
		printf("| %d ",t2[i]);
		if(i==n-1){ 
		   printf("|");
		}
	}
	for(i=0;i<n;i++){
		s[i] = t1[i] + t2[i];
	}
	printf("\n");
	printf("\t\t\tEt la somme de ses deux Tableux est :  \n");
	for(i=0;i<n;i++){
		printf("| %d ",s[i]);
		if(i==n-1){ 
		   printf("|");
		}
	}
	printf("\n\n\n\t\t\ttaper sur n'import quel button pour quitter..."); getch();
	return 0;
}
