/* O programa em quest�o definir� O o quanto 5 funcionarios ganhar�o de comiss�o de acordo com o valor das
 vendas diminuindo o total de mercadoridas vencidas ou danificadas para a troca e de acordo com as metas instipuladas para cada cidade durante o m�s. 
 Acrecentando o salario base de R$ 1200,00. 

#############################        METAS       ##################################
Menos que     R$ 20.000,00 - meta n�o atingida;
acima de      R$ 20.000,00 e abaixo de R$ 30.000,00 - meta atingida, comiss�o de 1%;
igual e acima R$ 30.000,00 e abaixo de R$ 40.000,00 - meta atingida, comiss�o de 2%;
igual e acima R$ 40.000,00 e abaixo de R$ 50.000,00 - meta atingida, comiss�o de 3%;
acima de      R$ 50.000,00 - meta atingida, comiss�o de 4%. 

PARA O PROBLEMA EM QUEST�O FOI NECESSARIO CRIAR VETORES DENTRO DE UM LA�O FOR PARA GUARDAR 
VARIOS DADOS E REALIZAR PARA POSTERIORMENTE UTILIZALOS EM UM SEGUNDO LA�O FOR
  COM UMA SELE��O ENCADEADA  GERANDO UM RELATORIO GERAL DE TODAS AS VARI�VEIS.


*/

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main()
{
char nome[5][50],city[5][20];
int i,j,sal=1200;
float vendas1[5],vendas2[5],troca1[5],troca2[5],vliq1[5],vliq2[5],gratif,valcomis[5][2];
setlocale(LC_ALL,"Portuguese");
printf("\tLeitura dos Dados dos funcion�rios\n ");
for(i=0; i<5; i++){
	printf("\n");
	printf("\n%i�FUNCION�RIO: ",i+1);
	gets(nome[i]);
	printf("CIDADE: ");
	gets(city[i]);
	fflush(stdin);
	printf("TOTAL DE VENDAS no 1� M�S: ");
	scanf("%f",&vendas1[i]);
	printf("TOTAL DE VENDAS: ");
	scanf("%f",&vendas2[i]);
	printf("DESCONTO SOBRE MERCADORIA 1� M�S: "); //gratifica��o � o termo utilizado para troca de produtos vencidos ou danificados.
	scanf("%f",&troca1[i]);
	printf("DESCONTO SOBRE MERCADORIA 2� M�S: "); //gratifica��o � o termo utilizado para troca de produtos vencidos ou danificados.
	scanf("%f",&troca2[i]);
	vliq1[i]= vendas1[i] - troca1[i];
	vliq2[i]= vendas2[i] - troca2[i];
	fflush(stdin);
}for(j=0;j<2;j++){
	salcomis[i][0] = vliq1[i]+sal;
	salcomis[i][1] = vliq2[i]+sal;
}
//system("cls");
for (i=0; i<5; i++){
	for(j=0; i<2;j++){
	
	if(j==0){
	printf("\n\n");
	if(salcomis[i][0] <21200){
	printf("\nO funcionario %s teve a liquidez de %.2f\nN�o atingiu a meta.",nome[i],vliq1[i]);
	printf("\nCIDADE:%s",city[i]);
	printf("\nSalario:R$%i,00",sal);
	}else if(vliq1[i] >=21200 && vliq1[i]<31200){
		gratif= valorcomis[i][0]*0.01;
		printf("\nO funcionario %s teve a liquidez de %.4f\nAtingiu a meta.",nome[i],vliq1[i]);
		printf("\nCIDADE:%s",city[i]);
		printf("\nPorcentagem de comiss�o: 1%%");
	    printf("\nValor da comiss�o: R$%.2f",salcomis[i][0]);
		printf("\nSalario+Comiss�o:R$%.2f",gratif);	
	}else if(vliq1[i] >= 31200 && vliq1[i]<41200){
		gratif= valorcomis[i][0]*0.02;
		printf("\nO funcionario %s teve a liquidez de %.4f\nAtingiu a meta.",nome[i],vliq1[i]);
		printf("\nCIDADE:%s",city[i]);
		printf("\nPorcentagem de comiss�o: 1%%");
	    printf("\nValor da comiss�o: R$%.2f",salcomis[i][0]);
		printf("\nSalario+Comiss�o:R$%.2f",gratif);	
	}else if(vliq1[i] >= 41200 && vliq1[i]<51200){
		gratif= valorcomis[i][0]*0.03;
		printf("\nO funcionario %s teve a liquidez de %.4f\nAtingiu a meta.",nome[i],vliq1[i]);
		printf("\nCIDADE:%s",city[i]);
		printf("\nPorcentagem de comiss�o: 1%%");
	    printf("\nValor da comiss�o: R$%.2f",salcomis[i][0]);
		printf("\nSalario+Comiss�o:R$%.2f",gratif);	
    }else if(vliq1[i] >=51200){
		gratif= valorcomis[i][0]*0.01;
		printf("\nO funcionario %s teve a liquidez de %.4f\nAtingiu a meta.",nome[i],vliq1[i]);
		printf("\nCIDADE:%s",city[i]);
		printf("\nPorcentagem de comiss�o: 1%%");
	    printf("\nValor da comiss�o: R$%.2f",salcomis[i][0]);
		printf("\nSalario+Comiss�o:R$%.2f",gratif);	
    }
}
}
}
return 0;	
}
