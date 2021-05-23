/*Leia nome, altura, peso inicial e peso final de 5 pacientes de uma clínica de
tratamento de peso, calcule e imprima seu IMC 1 (use o peso inicial) e seu IMC2
(use o peso final) e defina sua situação inicial e final de acordo com a tabela abaixo
e mostre também quantidade de kg(s) perdida por cada paciente.
IMC Resultado
Menos do que 18,5 Abaixo do peso
Entre 18,5 e 24,9 Peso normal
Entre 25 e 29,9 Sobrepeso
Entre 30 e 34,9 Obesidade grau 1
Entre 35 e 39,9 Obesidade grau 2
Mais do que 40 Obesidade grau 3*/
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main()
{
char nome[5][50];
int i,j;
float alt[5],psi[5], psf[5], qtdkg[5], imc[5][2];
setlocale(LC_ALL,"Portuguese");
printf("\n\tLeitura dos Dados dos pacientes: ");
for(i=0; i<5; i++)
{
fflush(stdin);
printf("\n\tNome? ");
scanf("%s", nome[i]);
fflush(stdin);
printf("\n\tAltura? ");
scanf("%f", &alt[i]);
printf("\n\tPeso Inicial? ");
scanf("%f", &psi[i]);
printf("\n\tPeso Final? ");
scanf("%f", &psf[i]);
qtdkg[i]= psi[i] - psf[i];
for (j=0; j<2; j++)
{
imc[i][0] = psi[i]/(alt[i]*alt[i]);
imc[i][1] = psf[i]/(alt[i]*alt[i]);
}
system("cls");
}
for (i=0; i<5; i++)
{
printf("\n\t%s tem altura %.2f ", nome[i],alt[i]);
printf("\n\tPeso Inicial - %.3f", psi[i]);
printf("\n\tPeso Final - %.3f", psf[i]);
printf("\n\tPerdeu %.3f kg.", qtdkg[i]);
for (j=0; j<2; j++)
{
if (j==0)
{
if (imc[i][0] < 18.5 )
{
printf ("\n\tIMC Inicial = %.2f", imc[i][0]);
printf ("\n\tAbaixo do Peso.");
}
else if (imc[i][0] >= 18.5 && imc[i][0]<=24.9)
{
printf ("\n\tIMC Inicial = %.2f", imc[i][0]);
printf ("\n\tNormal.");
}
else if (imc[i][0] >= 25 && imc[i][0]<=29.9)
{
printf ("\n\tIMC Inicial = %.2f", imc[i][0]);
printf ("\n\tSobrepeso.");
}
else if (imc[i][0] >= 30 && imc[i][0]<=34.9)
{
printf ("\n\tIMC Inicial = %.2f", imc[i][0]);
printf ("\n\tObesidade Grau 1.");
}
else if (imc[i][0] >= 35 && imc[i][0]<=39.9)
{
printf ("\n\tIMC Inicial = %.2f", imc[i][0]);
printf ("\n\tObesidade Grau 2.");
}
else if (imc[i][0] >= 40)
{
printf ("\n\tIMC Inicial = %.2f", imc[i][0]);
printf ("\n\tObesidade Grau 3.");
}
else
{
printf("\n\tDados Inválidos!");
}
printf("\n");
system("pause");
}//fechando if (j==0)
//Inserir aqui a condicional do IMC2 usando psf[i] no cálculo.
}
}
return(0);
}
