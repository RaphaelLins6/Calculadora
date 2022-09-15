#include <stdio.h>
#include<stdlib.h>

int main(){
int num1, num2;

printf(" *** Calculadora Modelo 1 *** \n");
printf("Digite o primeiro numero: \n");
scanf("%d", &num1);
printf("Digite o segundo numero: \n");
scanf("%d", &num2);
printf("Numero 1: %d \n", num1);
printf("Numero 2: %d \n", num2);

int soma = num1 + num2;
int subtracao = num1 - num2;
int multiplicacao = num1 * num2;
int divisao = num1 / num2;

printf("Soma: %d \n", soma);
printf("Subtracao: %d \n", subtracao);
printf("Multiplicacao: %d \n", multiplicacao);
printf("Divisao: %d \n", divisao);
system("pause");
return 0;
}
