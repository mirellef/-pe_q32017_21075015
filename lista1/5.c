#include <stdio.h>
int main ()
{
	int x, y, div;
	printf("Digite dois numeros interiros: \n");
	scanf("%d %d", &x, &y);
	
	div = x / y;
	
	printf("A divisao de %d por %d e: %d", x, y, div);
}