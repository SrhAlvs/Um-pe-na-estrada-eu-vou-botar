#include <stdio.h>
#include <locale.h> //inclus�o de bibliotecas
int main ()
{
	setlocale (LC_ALL, "Portuguese"); //escolhendo linguagem
	 //final do cabe�alho
	
	float num1ou2, num1, num2, num3, aba, vol; //iniciando vari�veis
	num1ou2, num1, num2, num3, aba, vol = 0; //garantindo valor inicial das vari�veis
	printf ("Para calcular a �rea da base e o volume de um prisma quadrangular, digite 1. Para calcular a �rea da base e o volume de um prisma triangular, digite 2."); //mostrar na tela
	scanf ("%f", &num1ou2); //receber do usu�rio
	if (num1ou2 == 1){ //se sim
	 printf ("Digite em metros, a largura do prisma:"); //mostrar na tela
	 scanf ("%f", &num1); //receber do usu�rio
	 printf ("Digite em metros, a profundidade do prisma:"); //mostrar na tela
	 scanf ("%f", &num2); //receber do usu�rio
	 printf ("Digite em metros, a altura do prisma:"); //mostrar na tela
	 scanf ("%f", &num3); //receber do usu�rio
	 aba = num1 * num2; //c�lculo
	 vol = aba * num3; //c�lculo
	 printf ("A �rea da base do prisma quadrangular em m� � %f", aba); //mostrar na tela
	 printf ("\nO volume do prisma quadrangular em m� � %f", vol); //mostrar na tela
	}
	else{ //se n�o
	 if (num1ou2 == 2){ //se sim
	  printf ("Digite em metros, o tamanho da base do tri�ngulo:"); //mostrar na tela
	  scanf ("%f", &num1); //receber do usu�rio
	  printf ("Digite em metros, a dist�ncia da base at� o v�rtice do tri�ngulo:"); //mostrar na tela
	  scanf ("%f", &num2); //receber do usu�rio
	  printf ("Digite em metros, a altura do prisma:"); //mostrar na tela
	  scanf ("%f", &num3); //receber do usu�rio
	  aba = (num1 * num2)/2; //c�lculo
	  vol = aba * num3; //c�lculo
	  printf ("A �rea da base do prisma triangular em m� � %f", aba); //mostrar na tela
	  printf ("\nO volume do prisma triangular em m� � %f", vol); //mostrar na tela
     }
     else{ //se n�o
     printf ("Voc� n�o escolheu nenhuma op��o."); //mostrar na tela
	 }
	}
} //final
