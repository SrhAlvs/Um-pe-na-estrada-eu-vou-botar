#include <stdio.h>
#include <locale.h> //inclus�o de bibliotecas
int main ()
{
	setlocale(LC_ALL, "Portuguese"); //escolhendo a linguagem
		//final do cabe�alho
	 float Num1, Num2, Num3, Med, AreaT; //iniciando vari�veis
	 Num1, Num2, Num3, Med, AreaT=0; //garantindo valor inicial da vari�vel
	 printf ("Este programa recebe 3 valores, tira a m�dia entre os dois primeiros e calcula a �rea de um tri�ngulo com os dois �ltimos."); //mostrar na tela
	 printf ("Insira o primeiro n�mero:"); //mostrar na tela 
	 scanf ("%f",&Num1); //receber do usu�rio
	 printf ("Insira o segundo n�mero:"); //mostrar na tela 
	 scanf ("%f",&Num2); //receber do usu�rio
	 printf ("Insira o terceiro n�mero:"); //mostrar na tela 
	 scanf ("%f",&Num3); //receber do usu�rio
	 Med = (Num1 + Num2)/2; //c�culo da m�dia
	 AreaT = (Num2 * Num3)/2; //c�culo da �rea do tri�ngulo 
	 printf ("O resultado da m�dia �: %f", Med); //mostrar na tela
	 printf (". O resultado da �rea do tri�ngulo em cent�metros quadrados �: %f", AreaT); //mostrar na tela 
} //fim
