#include <stdio.h>
int main () 
{
	int x, y, sub;
	printf("Digite dois valores inteiros: \n");
	scanf("%d %d", &x, &y);
	
	sub = x - y;
	printf("A divisao de %d e %d e: %d", x, y, sub);
}