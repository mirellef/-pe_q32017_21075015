#include <stdio.h>

int main () {
    
    int num;
    printf("Digite um numero inteiro: \n");
    scanf("%d", &num);
    
    impar_par(num);
}

// função verifica se é par ou impar//
void impar_par(int num)
{
    if ((num % 2) == 0) {
      printf("par");
    }
    else {
      printf("impar");
    }
    
}