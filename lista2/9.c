#include <stdio.h>

unsigned int potencia (int x, int y)
{
    int i, pot;
    pot = 1;
    
    for (i = 0; i<y; i++) {
        pot = pot*x;
    }
    
    printf("%d\n", pot);
    return;
}

unsigned main (){
    int x, y;
  
    printf("Digite dois valores inteiros: \n");
    scanf("%d %d",&x, &y);
    
    potencia(x,y);
}