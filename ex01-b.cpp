#include <stdio.h>
#include <locale.h>
#include<stdlib.h>
int main(){
setlocale(LC_ALL,"Portuguese");
char name[20];
float peso,altura,imc;

printf("\nDigite o Nome: ");
gets (name);
printf("\nDigite o peso: ");
scanf("%f",&peso);
printf("\nDigite a altura:");
scanf("%f",&altura);
imc = peso/(altura*altura);
system("cls");
printf("\n\tO IMC de %s é de %.2f",name,imc);

if (imc < 18.5)
printf(" e está abaixo do Peso.");

else if (imc >= 18.5 && imc <= 24.9)
printf(" e esta com o peso normal.",name);

 else if(imc >= 25 && imc <= 29.9)
printf(" e está com sobrepeso.",name);

 else if(imc >= 30 && imc <= 34.9)
printf(" e está com obesidade grau 1.",name);

 else if(imc >= 35 && imc <= 39.9)
printf(" e está com obesidade grau 2.",name);

 else
printf(" e está com obesidade grau 3.",name);
	
	return 0;
}
