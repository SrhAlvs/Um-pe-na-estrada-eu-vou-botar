#include <stdio.h>
#include <locale.h> //inclus�o de bibliotecas de comandos
int main ()
{
	setlocale(LC_ALL, "Portuguese"); //escolhendo linguagem
		//final do cabe�alho
	float Num1, ACir, AQua; //iniciando vari�veis
	Num1, ACir, AQua = 0; //garantindo valor inicial das vari�veis
	printf ("Este programa calcula a �rea de um quadrado e a �rea de uma circunfer�ncia, sendo que o raio e a aresta do quadrado possuem o mesmo valor."); //mostrar na tela
	printf ("Insira o valor do raio ou da aresta do quadrado em cent�metros:"); //mostrar na tela
	scanf ("%f", &Num1); //receber do usu�rio
	ACir = (3,14*Num1*Num1); //c�lculo da �rea da circunfer�ncia
	AQua = (Num1*Num1); //c�lculo da �rea do quadrado
	printf ("O valor da �rea da circunfer�ncia � : %f" , ACir); //mostrar na tela
	printf ("O valor da �rea do quadrado � : %f" , AQua); //mostrar na tela
} //fim
