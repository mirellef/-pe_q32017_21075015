#include <stdio.h>

int main () 
{
	int num, num2, pot;
	
	printf("Digite um numero inteiro: ");
    scanf("%d %d", &num, &num2);
    
	pot = pow(num, num2);
    
	printf("A potencia de %d por %d e: %d", num, num2, pot);
}