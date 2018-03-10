#include<stdio.h>  
 
 int main(){  
   printf("\n Programa que gera todos os numeros pares e multiplos de 03. \n\t");  
   
   int cont,num1,num2;  
   printf("\nDigite o num 1: \t");  
   scanf("%d",&valor1);  
   printf("Digite o num 2: \t");  
   scanf("%d",&num2);  
   
   if(num2<num1){
   	 cont=num1;  
     num1=num2;  
     num2=cont;  
   }  
   for(cont=num1;cont<=num2;cont++){  
     if(cont%2==0){  
       printf("%d \n",cont);  
     }   
	}
	
   system("pause");
   
   int n,i;  
   printf("\nDigite o total de números multiplos de 3: \t");  
   scanf("%i", &n);
   i = 1;
   while(i<=n){
	if(i%3==0){
   		printf("%i \n", i);
   	}
	   i++;
	}
	
	system("pause");
	
	return 0;
}  
