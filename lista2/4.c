#include <stdio.h>

float soma (float  num1, float num2)
{
    float soma = num1 + num2;
    printf("%.2f", soma);
    return (soma);
}

float subtracao (float num1, float num2)
{
    float subtracao = num1 - num2;
    printf("%.2f", subtracao);
    return(subtracao);
}

float multiplica (float num1, float num2)
{
    float multiplica = num1 * num2;
    printf("%.2f", multiplica);
    return(multiplica);
}

float divisao (float num1, float num2)
{
    float divisao = num1 / num2;
    printf("%.2f", divisao);
    return(divisao);
}

float potencia (float num1, float num2)
{
    float potencia;
    int i;
    potencia = 1;
    
    for (i = 0; i<num2; i++) {
        potencia = potencia*num1;
    }
    
    printf("%.2f", potencia);
    return(potencia);
}

int main () {
    int opcao;
    float num1, num2;
  
    printf(" Digite 1 para somar\n"
           " Digite 2 para subtrair\n"
           " Digite 3 para multiplicar\n"
           " Digite 4 para dividir\n"
           " Digite 5 para potencia\n"
           " Digite dois numeros reais: \n");
    scanf("%d %f %f",&opcao, &num1, &num2);
    
    switch (opcao)
    {
        case 1:
        soma(num1,num2);
        break;
        
        case 2:
        subtracao(num1,num2);
        break;
        
        case 3:
        multiplica(num1,num2);
        break;
        
        case 4:
        divisao(num1,num2);
        break;
        
        case 5:
        potencia(num1,num2);
        break;
        
        default :
        printf("Valor invalido!");
    }
  
}

