#include <stdio.h>
#include <locale.h> //inclus�o de bibliotecas de comandos
int main()
{
	setlocale(LC_ALL, "portuguese"); //escolhendo linguagem
		//final do cabe�alho
	float Num1, Num2, Total; //iniciando as vari�veis
	Num1, Num2, Total = 0; //garantindo valor inicial das vari�veis
	printf ("Este programa faz a subtra��o entre dois n�meros."); //mostrar na tela
	printf ("Insira o primeiro n�mero:"); //mostrar na tela
	scanf ("%f",&Num1); //receber do usu�rio
	printf ("Insira o segundo n�mero:"); //mostrar na tela
	scanf ("%f",&Num2); //receber do usu�rio
	Total = Num1-Num2; //c�culo da subtra��o
	printf ("A subtra��o entre os n�meros � %f",Total); //mostrar na tela
} //fim
