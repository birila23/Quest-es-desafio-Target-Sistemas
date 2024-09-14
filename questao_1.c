#include <stdio.h>
int fibonacci(int n){
  int ant = 0, atual = 1;
  int k; 
for(k = 1;  k <= n; k++){
  atual = atual + ant;
  ant = atual - ant;

  if(atual == n){
    return 1;
  }
}
  return 0;
}

void main(){
  int n;
  printf("Digite um numero: ");
  scanf( "%d", &n);
  
  if(fibonacci(n) == 1){
    printf("O numero %d pertence a sequencia de fibonacci", n);
  }
  else{
    printf("O numero %d nao pertence a sequencia de fibonacci", n);  
  }
}
