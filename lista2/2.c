#include <stdio.h>

// Função calcula volume//
void calcula_volume (float largura, float comprimento, float altura)
{
    float temp;
    
    temp = largura * comprimento * altura;
    printf("%.2f\n", temp);
}

int main () {
  
    float comprimento , altura, largura;
    printf("Digite a largura, o comprimento e altura do objeto: \n");
    scanf("%f %f %f", &largura, &comprimento, &altura);
    
    calcula_volume (largura, comprimento, altura);
}