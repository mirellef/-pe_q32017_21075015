#include <stdio.h>

int main () 
{
	int num, cont, fat = 1;
	
	printf("Digite um numero inteiro: ");
	scanf("%d", &num);
	cont = num;
	
	while (cont > 0) {
    
		fat = fat * cont;
		cont = cont - 1;
	}
	
  printf("O fatorial de %d e: %d", num, fat);
}