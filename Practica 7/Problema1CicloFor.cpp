#include<stdio.h>
#include<stdlib.h>
/*Dec de Variables*/

int b=0,n=0,i=0,mult=0;

/*Programa que genere n multiplos*/

int main()

{
	printf("\n Ingrese el numero base a usar \n");
	scanf("%d",&b);_flushall();
	
	printf("\n Inregese el numero de multiplos a generar \n");
	scanf("%d",&n);_flushall();
	
	/*Ciclo For*/
	
	for(i=0;i<=n;i++)
	
	{
	/*Operacion(es)*/
	
	mult=mult+b*i;
	printf("\n Los n multiplos de b son: %d mult",mult);
		
	}
	system("pause");
	return 0;
}

