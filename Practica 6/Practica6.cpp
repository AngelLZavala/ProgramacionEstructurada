#include <stdio.h>

int Num=0,Sum=0,i=-1;
float Prom=0;
int main ()
{
do
{
	printf("\nIngresar un numero\n");
	scanf("%d",&Num);_flushall();
	
	if(Num>=0);
{

    Sum=Sum+Num;
    i=i+1;
    
}

} while(Num>=0);
{

if(i==0);{
i=1;
Prom=Sum/i;
}
}
	printf("\n El promedio es %.2f \n", Prom);
	return 0;
}
