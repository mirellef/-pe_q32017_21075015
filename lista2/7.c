#include <stdio.h>

float celcius (int opcao2, float num)
{
    if (opcao2 == 1) {
        num = num;
        printf("%.2f C\n", num);
    }
    if (opcao2 == 2) {
        num = (1.8*num)+32;
        printf("%.2f F\n", num);
    }
    else {
        num = num + 273;
        printf("%.2f K\n", num);
    }
    return(num);
}

float fahrenheit (int opcao2, float num)
{
    if (opcao2 == 1) {
        num = ((num-32)/9)*5;
        printf("%.2f C\n", num);
    }
    if (opcao2 == 2) {
        num = num;
        printf("%.2f F\n", num);
    }
    else {
        num = (num-32)/9;
        printf("%.2f K\n", num);
    }
    return(num);
}

float kelvin (int opcao2, float num)
{
    if (opcao2 == 1) {
        num = num - 273;
        printf("%.2f C\n", num);
    }
    if (opcao2 == 2) {
        num = (num-273)/5;
        printf("%.2f F\n", num);
    }
    else {
        num = num;
        printf("%.2f K\n", num);
    }
    return(num);
}

float conv_temperatura (int opcao1, int opcao2, float num)
{
    switch (opcao1)
    {
        case 1:
        celcius(opcao2, num);
        break;
        
        case 2:
        fahrenheit(opcao2, num);
        break;
        
        case 3:
        kelvin(opcao2, num);
        break;
        
        default :
        printf("Valor invalido!");
    }

    return;
}


unsigned int decimal(int opcao2, int num)
{
    int resto; 
    if (opcao2 == 1) {
        num = num;
        printf("%d\n", num);
    }
    else {
         while (num!=0) {
           resto = num%2;
           resto = resto*10;
         }
         
        
      printf("%d\n", resto);
    }
    return(resto);
    
}

unsigned int binario (int opcao2, int num)
{
    if (opcao2 == 1) {
        num = num;
        printf("%d\n", num);
    }
    else {
        num = num;
      printf("%d\n", num);
    }
    return(num);
}

unsigned int conv_base (int opcao1,float opcao2, float num)
{
    switch (opcao1)
    {
        case 1:
        decimal(opcao2, num);
        break;
        
        case 2:
        binario(opcao2, num);
        break;
        
        default :
        printf("Valor invalido!");
    }
    return(num); 
}


int main () {
    int opcao, opcao1, opcao2;
    float num;
  
    printf("Para converter Temperatura\n"
           "  de Celcius para Fahrenheit digite 1 1 2 e o valor numerico \n"
           "  de Celcius para Kelvin digite 1 1 3 e o valor numerico \n"
           "  de Fahrenheit para Celcius digite 1 2 1 e o valor numerico \n"
           "  de Fahrenheit para Kelvin digite 1 2 3e o valor numerico \n"
           "  de Kelvin para Celcius digite 1 3 1 e o valor numerico \n"
           "  de Celcius para Fahrenheit digite 1 3 2 e o valor numerico \n\n"
           "Digite 2 para converter Base \n"
           "  de base decimal para binaria digite 2 1 1 e o valor numerico \n"
           "  de base bnaria para decimal digite 2 2 2 e o valor numerico \n");
    scanf("%d %d %d %f", &opcao, &opcao1, &opcao2, &num);
    
    switch (opcao)
    {
        case 1:
        conv_temperatura(opcao1, opcao2, num);
        break;
        
        case 2:
        conv_base(opcao1, opcao2, num);
        break;
        
        default :
        printf("Valor invalido!");
    }
  
}