#include <stdio.h>
#include <locale.h> //inclus�o de bibliotecas de comandos
int main ()
{
	setlocale (LC_ALL, "Portuguese"); //escolhendo linguagem
		//final do cabe�alho
	float Num1, Num2, Num3, Num4, Num5, Num6, Med, Area; //iniciando vari�veis
	Num1, Num2, Num3, Num4, Num5, Num6, Med, Area = 0; //garantindo valor inicial da vari�vel
	printf ("Este programa recebe 6 valores, tira a m�dia entre os 4 primeiros e calcula a �rea de um tri�ngulo ret�ngulo com os 2 �ltimos valores."); //mostrar na tela
	printf ("Insira o primeiro n�mero:"); //mostrar na tela
	scanf ("%f",&Num1); //receber do usu�rio
	printf ("Insira o segundo n�mero:"); //mostrar na tela
	scanf ("%f",&Num2); //receber do usu�rio
	printf ("Insira o terceiro n�mero:"); //mostrar na tela
	scanf ("%f",&Num3); //receber do usu�rio
	printf ("Insira o quarto n�mero:"); //mostrar na tela
	scanf ("%f",&Num4); //receber do usu�rio
	printf ("Insira o quinto n�mero:"); //mostrar na tela
	scanf ("%f",&Num5); //receber do usu�rio
	printf ("Insira o sexto n�mero:"); //mostrar na tela
	scanf ("%f",&Num6); //receber do usu�rio
	Med=((Num1+Num2+Num3+Num4)/4); //c�lculo da m�dia
	Area=((Num5*Num6)/2); //c�lculo da �rea do tri�ngulo ret�ngulo
	printf ("O resultado da m�dia entre os primeiros 4 valores �: %f", Med); //mostrar na tela
	printf ("O resultado da �rea do tri�ngulo ret�ngulo em cent�metros quadrados �: %f", Area); //mostrar na tela
} //fim
