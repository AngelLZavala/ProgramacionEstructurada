#include <stdio.h>
#include <stdlib.h>

char Op;
float Num1,Num2,Resultado;
int main ()
{
	printf("\n Calculadora Simple:\n\n");
	printf("\n Introducir numero1,la operacion +,-,/,* y el numero2:\n\n");
	scanf("%f %c %f",&Num1,&Op,&Num2);_flushall();
	
	switch(Op)
	{
		case '+':
		Resultado=Num1+Num2;
		break;
		
		case '-':
		Resultado=Num1-Num2;
		break;
		
		case '/':
		Resultado=Num1/Num2;
		break;
		
		case '*':
		Resultado=Num1*Num2;
		break;
		
		default:
		printf("Operador invalido");
	
	}
	printf("%.2f %c %.2f= %.2f",Num1,Op,Num2,Resultado);
	
	return 0;
	
}
