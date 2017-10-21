#include <stdio.h>

int main ()
{
	double temperatura, celcius, kelvin;
	int opcao;
	
	printf("Digite uma temperatura \nDigite 1 para transformar de Celcius para Kelvin \nDigite 2 para transformar de Kelvin para Celcius \n");
	scanf("%f  %d", &temperatura, &opcao);
	printf("%f\n", temperatura);
	
	switch (opcao) {
	    case 1:
	         kelvin = temperatura;
	         printf("%f", kelvin);
	         break;
	  
	    case 2:
	         celcius = temperatura;
	         printf("%f", celcius);
	         break;
	    
	    default :
	         printf("Valor invalido!");
	         break;
	  
	}
	
	
}