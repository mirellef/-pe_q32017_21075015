#include <stdio.h>
int main () 
{
    int x, y, soma;
	printf("Digite dois valores inteiros: \n");
	scanf("%d %d", &x, &y);
	
	soma = x + y;
	printf("A soma de %d e %d e: %d", x, y, soma);
}