#include <stdio.h>

int main() {
  int a,         /* guarda o número de alunos      */
      nota,      /* usada para a leitura das notas */
      contador,  /* número de notas já lidas      */
      maiornota, /* guarda a maior nota            */
      menornota; /* guarda a menor nota            */ 
  
  printf("\n\tCalculo de maior e menor nota de uma turma\n");
  printf("\nDigite o número de alunos: ");
  scanf("%d", &a);
  
  /* inicializacoes */
  contador = 0;
  maiornota = 0;
  menornota = 100;
  
  while (contador <  a) {
    printf("Digite uma nota de 0 a 100: "); 
    scanf("%d", nota);
    contador = contador + 1;
    if (maiornota < nota)
      maiornota = nota;
    if (menornota > nota)
      menornota = nota;
  }
  
  printf("A maior nota obtida foi: %d\n", maiornota);
  printf("A menor nota obtida foi: %d\n", menornota);
  
  return 0;	
}
