#include <stdio.h>
#include <locale.h> //inclus�o de bibliotecas de comandos
int main ()
{
	setlocale(LC_ALL, "portuguese"); //escolhendo linguagem
		//final do cabe�alho
	float Num1, Num2, Total1, Total2; //iniciando as vari�veis
	Num1, Num2, Total1, Total2 = 0; //garantindo valor inicial da vari�veis
	printf ("Este programa soma dois n�meros e subtrai o primeiro n�mero do segundo n�mero."); //mostrar na tela
	printf ("Insira o primeiro n�mero:"); //mostrar na tela
	scanf ("%f",&Num1); //receber do usu�rio
	printf ("Insira o segundo n�mero:"); //mostrar na tela
	scanf ("%f",&Num2); //receber do usu�rio
	Total1 = Num1+Num2; //c�lculo de soma
	Total2 = Num2-Num1; //c�lculo de subtr��o
	printf ("O resultado da soma do primeiro n�mero com o segundo � %f ",Total1); //mostrar na tela
	printf ("O resultado da subtra��o do primeiro n�mero no segundo � %f ",Total2); //mostrar na tela
} //fim
