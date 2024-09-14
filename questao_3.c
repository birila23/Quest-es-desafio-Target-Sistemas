#include <stdio.h>

void main(){
  int indice = 12;
  int soma = 0; 
  int k;
  
  for(k = 1; k < indice; k ++){
    soma = soma + k;		
  }
  printf("Soma = %d", soma);

}
