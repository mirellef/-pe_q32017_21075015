#include <stdio.h>

int main () 
{
	int num;
	int res;
	printf("Digite um numero inteiro: \n");
    scanf("%d", &num);
	
	res = num%2;
	
 	if (res != 0) {
	    printf("impar");
	 }  	
    else {
		printf("par");
    }
}