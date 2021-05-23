/* O programa em questão definirá O o quanto 5 funcionarios ganharão de comissão de acordo com o valor das
 vendas diminuindo o total de mercadoridas vencidas ou danificadas para a troca e de acordo com as metas instipuladas para cada cidad DURANTE DOIS MESES. 
 Acrecentando o salario base de R$ 1200,00. 

#############################        METAS       ##################################
Menos que     R$ 20.000,00 - meta não atingida;
acima de      R$ 20.000,00 e abaixo de R$ 30.000,00 - meta atingida, comissão de 1%;
igual e acima R$ 30.000,00 e abaixo de R$ 40.000,00 - meta atingida, comissão de 2%;
igual e acima R$ 40.000,00 e abaixo de R$ 50.000,00 - meta atingida, comissão de 3%;
acima de      R$ 50.000,00 - meta atingida, comissão de 4%. 

PARA O PROBLEMA EM QUESTÃO FOI NECESSARIO CRIAR VETORES DENTRO DE UM LAÇO FOR PARA GUARDAR 
VARIOS DADOS E REALIZAR PARA POSTERIORMENTE UTILIZALOS EM UM SEGUNDO LAÇO FOR
  COM UMA SELEÇÃO ENCADEADA  GERANDO UM RELATORIO GERAL DE TODAS AS VARIÁVEIS. E COMO ADICIONEI
  DADOS DE DOIS MESES FOI PRECISO A MATRIZ BIDIMENSIONAL.


*/

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main()
{
char nome[5][50],city[5][20];
int i,j,sal=1200;
float vendas[5],troca[5],vliq[5][2],gratif,valorcomis;
setlocale(LC_ALL,"Portuguese");
printf("\tLeitura dos Dados dos funcionários\n ");
for(i=0; i<5; i++){
	printf("\n");
	printf("\n%iºFUNCIONÁRIO: ",i+1);
	gets(nome[i]);
	printf("CIDADE: ");
	gets(city[i]);
	fflush(stdin);
	for(j=0; j<2; j++){
	printf("TOTAL DE VENDAS %i: ",j+1);
	scanf("%f",&vendas[j]);
	printf("DESCONTO SOBRE MERCADORIA %i: ",j+1); //gratificação é o termo utilizado para troca de produtos vencidos ou danificados.
	scanf("%f",&troca[j]);
	vliq[i][j]= vendas[j] - troca[j];
	fflush(stdin);

}
}
//system("cls");
for (i=0; i<5; i++){

	for(j=0;j<2;j++){
	
	printf("\n\n");
	if(vliq[i][j] <20000){
		printf("\n\n");
	printf("\nO funcionario %s teve a liquidez de %.2f\nNão atingiu a meta.",nome[i],vliq[i][j]);
	printf("\nCIDADE:%s",city[i]);
	printf("\nSalario:R$%i,00",sal);
	}else if(vliq[i][j] >=20000 && vliq[i][j]<30000){
		gratif= sal+(vliq[i][j]*0.01);
		valorcomis = vliq[i][j]*0.01;
		printf("\nO funcionario %s teve a liquidez de %.4f\nAtingiu a meta.",nome[i],vliq[i][j]);
		printf("\nCIDADE:%s",city[i]);
		printf("\nPorcentagem de comissão: 1%%");
	    printf("\nValor da comissão: R$%.2f",valorcomis);
		printf("\nSalario+Comissão:R$%.2f",gratif);	
	}else if(vliq[i][j] >= 30000 && vliq[i][j]<40000){
		gratif= sal+(vliq[i][j]*0.02);
		valorcomis = vliq[i][j]*0.02;
		printf("\nO funcionario %s teve a liquidez de %.2f\nAtingiu a meta.",nome[i],vliq[i][j]);
		printf("\nCIDADE:%s",city[i]);
		printf("\nPorcentagem de comissão: 2%%");
		printf("\nValor da comissão: R$%.4f",valorcomis);
		printf("\nSalario+Comissão:R$%.2f",gratif);	
	}else if(vliq[i][j] >= 40000 && vliq[i][j]<50000){
		gratif= sal+(vliq[i][j]*0.03);
		valorcomis = vliq[i][j]*0.03;
		printf("\nO funcionario %s teve a liquidez de %.2f\nAtingiu a meta.",nome[i],vliq[i][j]);
		printf("\nCIDADE:%s",city[i]);
		printf("\nPorcentagem de comissão: 3%%");
		printf("\nValor da comissão: R$%.4f",valorcomis);
		printf("\nSalario+Comissão:R$%.2f",gratif);
    }else if(vliq[i][j] >=50000){
		gratif= sal+(vliq[i][j]*0.04);
		valorcomis = vliq[i][j]*0.04;
		printf("\nO funcionario %s teve a liquidez de %.2f\nAtingiu a meta.",nome[i],vliq[i][j]);
		printf("\nPorcentagem de comissão: 4%%");
		printf("\nValor da comissão: R$%.4f",valorcomis);
		printf("\nSalario+Comissão:R$%.2f",gratif);
    }
}
}
return 0;	
}
