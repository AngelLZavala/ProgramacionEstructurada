#include <stdio.h>

int main()
{
	char x;
	printf("Escriba un caracter:");
	x=getchar();
	int b= (int) x;
	if(b>=48 && b<=57){
	   printf("\n Es numerico.");
    }else{
    if(b>=65 && b<=90){
        printf("\n Es alfabetico mayuscula:");
    }else{
    if(b>=97 && b<=122){
    	printf("\n Es alfabetico minuscula:");
	}
	  }
   }
   return 0;
}
