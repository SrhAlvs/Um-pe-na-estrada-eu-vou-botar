#include <stdio.h>
#include <locale.h>  //inclus�o de bibliotecas
int main ()
{
	setlocale (LC_ALL, "Portuguese");  //escolhendo a linguagem
		//final do cabe�alho
	float Num1, Num2, Num3, Media;  //iniciando as vari�veis 
	Num1, Num2, Num3, Media = 0;  //garantindo valor inicial da vari�vel
	printf ("Este programa recebe tr�s valores, calcula a m�dia entre eles e ao final mostra a nota e diz se o aluno foi aprovado ou reprovado.");  //mostrar na tela
	printf ("Insira a primeira nota:");  //mostrar na tela
	scanf ("%f", &Num1);  //receber do usu�rio
	printf ("Insira a segunda nota:");  //mostrar na tela
	scanf ("%f", &Num2);  //receber do usu�rio
	printf ("Insira a terceira nota:");  //mostrar na tela
	scanf ("%f", &Num3);  //receber do usu�rio
	Media = (Num1+Num2+Num3)/3;  //c�lculo da m�dia
	if (Media>=6){  //se sim
	printf ("\nAluno aprovado. Nota: %f", Media); //mostrar na tela
	}
	else {  //se n�o
	printf ("\nAluno reprovado. Nota: %f", Media); //mostrar na tela
	}
}  //fim

