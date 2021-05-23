/* Neste exercício (1d) foram utilizados 2 cliclos FOR. No primeiro utilizei vetor para guardar de dados dos 5 pacientes e resultados do imc, dando uma pequena
pausa para apresentar o IMC antes do proximo ciclo (achei a biblioteca e o comando "Sleep" na net). Terminando os ciclos caimos no segundo laço for, dentro dele
temos a estrutura de seleção composta em que usei para definir a situação do paciente e dentro desta uma estrutura condicional composta para definir se o paciente
ganhou, perdeu ou manteu o peso (já que temos peso inicial e final).*/

#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <windows.h>
int main(){
setlocale(LC_ALL,"Portuguese");
char name[5][20];
float pesoi[5],pesof[5],altura[5],imc[5],pf;
int i;
for(i=0; i<5; i++){
printf("\n");
printf("\nDigite o Nome: ");
gets (name[i]);
fflush(stdin);
printf("Digite o peso inicial: ");
scanf("%f",&pesoi[i]);
printf("Digite o peso final: ");
scanf("%f",&pesof[i]);
printf("Digite a altura:");
scanf("%f",&altura[i]);
imc[i] = pesof[i]/(altura[i]*altura[i]);
fflush(stdin);
printf("\n\tO IMC de %s é de %.2f",name[i],imc[i]);
Sleep (1000); // comando para pausar o programa por instantes.PS: comand começa com letra maiuscula e biblioteca <windows.h> é necessaria
system("cls");
}
for(i=0; i<5; i++){
if (imc[i] < 18.5){
printf("\n\n");	
printf("Paciente %s;",name[i]);	
printf("\nPeso inicial: %.2f;",pesoi[i]);
printf("\nPeso final: %.2f;",pesof[i]);
	if (pesoi[i] > pesof[i]){
	pf=0;	
	pf= pesoi[i] - pesof[i];
	printf("\nPaciente perdeu %.2fkg!",pf);
	}else if (pesoi[i] < pesof[i]){
	pf=0;	
	pf= pesof[i] - pesoi[i];
	printf("\nPaciente ganhou %.2fkg!",pf);
	}else{
	printf("\nPaciente está com o mesmo peso!");
}
printf("\n\tPACIENTE ABAIXO DO PESO!\n\n");
}
else if (imc[i] >= 18.5 && imc[i] <= 24.9){
printf("\nPaciente %s;",name[i]);	
printf("\nPeso inicial: %.2f;",pesoi[i]);
printf("\nPeso final: %.2f;",pesof[i]);
	if (pesoi[i] > pesof[i]){
	pf=0;	
	pf= pesoi[i] - pesof[i];
	printf("\nPaciente perdeu %.2fkg!",pf);
	}else if (pesoi[i] < pesof[i]){
	pf=0;	
	pf= pesof[i] - pesoi[i];
	printf("\nPaciente ganhou %.2fkg!",pf);
	}else{
	printf("\nPaciente está com o mesmo peso!");
}
printf("\n\tPACIENTE COM O PESO NORMAL!\n\n");
}
 else if(imc[i] >= 25 && imc[i] <= 29.9){
printf("\nPaciente %s;",name[i]);	
printf("\nPeso inicial: %.2f;",pesoi[i]);
printf("\nPeso final: %.2f;",pesof[i]);
if (pesoi[i] > pesof[i]){
	pf=0;	
	pf= pesoi[i] - pesof[i];
	printf("\nPaciente perdeu %.2fkg!",pf);
	}else if (pesoi[i] < pesof[i]){
	pf=0;	
	pf= pesof[i] - pesoi[i];
	printf("\nPaciente ganhou %.2fkg!",pf);
	}else{
	printf("\nPaciente está com o mesmo peso!");
}
printf("\n\tPACIENTE ESTÁ COM SOBREPESO!\n\n");
}
 else if(imc[i] >= 30 && imc[i] <= 34.9){
printf("\nPaciente %s;",name[i]);	
printf("\nPeso inicial: %.2f;",pesoi[i]);
printf("\nPeso final: %.2f;",pesof[i]);
	if (pesoi[i] > pesof[i]){
	pf=0;	
	pf= pesoi[i] - pesof[i];
	printf("\nPaciente perdeu %.2fkg!",pf);
	}else if (pesoi[i] < pesof[i]){
	pf=0;	
	pf= pesof[i] - pesoi[i];
	printf("\nPaciente ganhou %.2fkg!",pf);
	}else{
	printf("\nPaciente está com o mesmo peso!");
}
printf("\n\tPACIENTE ESTÁ COM OBESIDADE GRAU 2!\n\n");
}
 else if(imc[i] >= 35 && imc[i] <= 39.9){
printf("\nPaciente %s;",name[i]);	
printf("\nPeso inicial: %.2f;",pesoi[i]);
printf("\nPeso final: %.2f;",pesof[i]);
	if (pesoi[i] > pesof[i]){
	pf=0;	
	pf= pesoi[i] - pesof[i];
	printf("\nPaciente perdeu %.2fkg!",pf);
	}else if (pesoi[i] < pesof[i]){
	pf=0;	
	pf= pesof[i] - pesoi[i];
	printf("\nPaciente ganhou %.2fkg!",pf);
	}else{
	printf("\nPaciente está com o mesmo peso!");
}
printf("\n\tPACIENTE ESTÁ COM OBESIDADE GRAU 2!\n\n");
}

 else{
printf("\nPaciente %s;",name[i]);	
printf("\nPeso inicial: %.2f;",pesoi[i]);
printf("\nPeso final: %.2f;",pesof[i]);
	if (pesoi[i] > pesof[i]){
	pf=0;	
	pf= pesoi[i] - pesof[i];
	printf("\nPaciente perdeu %.2fkg!",pf);
	}else if (pesoi[i] < pesof[i]){
	pf=0;	
	pf= pesof[i] - pesoi[i];
	printf("\nPaciente ganhou %.2fkg!",pf);
	}else{
	printf("\nPaciente está com o mesmo peso!");
}
printf("\n\tPACIENTE COM OBESIDADE GRAU 3!\n\n");
}
}
	return 0;
}
