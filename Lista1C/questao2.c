#include <stdio.h>

int main() {
  int num,
      bin,
      aux,
      dig,
      pot;                               
      
  printf("\n\tDigite um numero inteiro: \n");
  scanf("%d", &num);


  aux = num;
  bin = 0;
  pot = 1;

  while (aux > 0) {
    dig = aux % 2;
    aux = aux / 2;
    bin = bin + dig * pot;
    pot = pot * 10;
  }
  printf("\nO numero %d escrito na base binaria: %d\n", num, bin);

  return 0;
}
