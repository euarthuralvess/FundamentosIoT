#include <stdio.h>
 int main(void){
 	
 	int contaDigitos = 0, digito;
	 scanf("%d", &digito);
	 if (digito == 0) contaDigitos = 1;
	else
		while (digito != 0)
        {
        contaDigitos = contaDigitos + 1;
        digito = digito / 10;
        }
      	printf("%d\n", contaDigitos);
	    return 0;
}

