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
	
	return 0;
}
