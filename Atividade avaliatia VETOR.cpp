/* O programa em quest�o definir� O o quanto 5 funcionarios ganhar�o de comiss�o de acordo com o valor das
 vendas diminuindo o total de mercadoridas vencidas ou danificadas para a troca e de acordo com as metas instipuladas para cada cidade DURANTE O M�S. 
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
int i,sal=1200;
float vendas[5],troca[5],vliq[5],gratif,valorcomis;
setlocale(LC_ALL,"Portuguese");
printf("\tLeitura dos Dados dos funcion�rios\n ");
for(i=0; i<5; i++){
	printf("\n");
	printf("\n%i�FUNCION�RIO: ",i+1);
	gets(nome[i]);
	printf("CIDADE: ");
	gets(city[i]);
	fflush(stdin);
	printf("TOTAL DE VENDAS: ");
	scanf("%f",&vendas[i]);
	printf("DESCONTO SOBRE MERCADORIA: "); //gratifica��o � o termo utilizado para troca de produtos vencidos ou danificados.
	scanf("%f",&troca[i]);
	vliq[i]= vendas[i] - troca[i];
	fflush(stdin);
}
//system("cls");
for (i=0; i<5; i++){
	printf("\n\n");
	if(vliq[i] <20000){
	printf("\nO funcionario %s teve a liquidez de %.2f\nN�o atingiu a meta.",nome[i],vliq[i]);
	printf("\nCIDADE:%s",city[i]);
	printf("\nSalario:R$%i,00",sal);
	}else if(vliq[i] >=20000 && vliq[i]<30000){
		gratif= sal+(vliq[i]*0.01);
		valorcomis = vliq[i]*0.01;
		printf("\nO funcionario %s teve a liquidez de %.4f\nAtingiu a meta.",nome[i],vliq[i]);
		printf("\nCIDADE:%s",city[i]);
		printf("\nPorcentagem de comiss�o: 1%%");
	    printf("\nValor da comiss�o: R$%.2f",valorcomis);
		printf("\nSalario+Comiss�o:R$%.2f",gratif);	
	}else if(vliq[i] >= 30000 && vliq[i]<40000){
		gratif= sal+(vliq[i]*0.02);
		valorcomis = vliq[i]*0.02;
		printf("\nO funcionario %s teve a liquidez de %.2f\nAtingiu a meta.",nome[i],vliq[i]);
		printf("\nCIDADE:%s",city[i]);
		printf("\nPorcentagem de comiss�o: 2%%");
		printf("\nValor da comiss�o: R$%.4f",valorcomis);
		printf("\nSalario+Comiss�o:R$%.2f",gratif);	
	}else if(vliq[i] >= 40000 && vliq[i]<50000){
		gratif= sal+(vliq[i]*0.03);
		valorcomis = vliq[i]*0.03;
		printf("\nO funcionario %s teve a liquidez de %.2f\nAtingiu a meta.",nome[i],vliq[i]);
		printf("\nCIDADE:%s",city[i]);
		printf("\nPorcentagem de comiss�o: 3%%");
		printf("\nValor da comiss�o: R$%.4f",valorcomis);
		printf("\nSalario+Comiss�o:R$%.2f",gratif);
    }else if(vliq[i] >=50000){
		gratif= sal+(vliq[i]*0.04);
		valorcomis = vliq[i]*0.04;
		printf("\nO funcionario %s teve a liquidez de %.2f\nAtingiu a meta.",nome[i],vliq[i]);
		printf("\nPorcentagem de comiss�o: 4%%");
		printf("\nValor da comiss�o: R$%.4f",valorcomis);
		printf("\nSalario+Comiss�o:R$%.2f",gratif);
    }
}
return 0;	
}
