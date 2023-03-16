#include <stdio.h>

int main()
{
   
    
    int vetores[5];
    int contador;
    
    for(int i=0; i<5; i++){
      scanf("%d",&vetores[i]);
    }
    
    contador = 0;
    for (int i=0; i< 5; i++)
      if  (vetores[i] > 100){
        contador += 1;
        
      }
    printf("quantos números é maior que 100: %d\n", contador);
 
}

