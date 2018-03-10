#include <stdio.h>
#include <locale.h>

int main() {
  int a, b, c,      /* entrada            */
      aux;          /* auxiliar para a troca */
		setlocale(LC_ALL,"Portuguese");
  printf("\n\tDigite tres números naturais: \n");
  scanf("%d", &a);
  scanf("%d", &b);
  scanf("%d", &c); 

  /* coloca o maior dos números dados no a */
  if (b > a){
    aux = a;
    a = b;
    b = aux;
  }
  if (c > a){
    aux = a;
    a = c;
    c = aux;
  }
  
  /* verifica se b e c sao catetos de um triângulo com a de hipotenusa */
  if (a * a == b * b + c * c)
    printf("O triângulo é retangulo\n");
  else 
    printf("O triângulo não é retangulo\n");
  system("pause");
  return 0;
}

