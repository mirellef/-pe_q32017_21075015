#include <stdio.h>
int main () 
{
    int x, y, mult;
	printf("Digite dois valores inteiros: \n");
	scanf("%d %d", &x, &y);
	
	mult = x * y;
	printf("A multiplicacao de %d e %d e: %d", x, y, mult);
}