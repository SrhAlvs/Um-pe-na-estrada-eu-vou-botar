#include <stdio.h>
#include <locale.h>  //inclus�o de bibliotecas
int main()
{
	setlocale (LC_ALL, "Portuguese");  //escolhendo linguagem
	  //final do cabe�alho
    float Num1;  //iniciando as vari�veis
    float Num2;
    float Media; 
    Num1, Num2, Media= 0;  //garantindo valor inicial da vari�vel
    printf ("Esse programa calcula a m�dia entre duas notas\n"); //mostrar na tela
	printf ("Insira a primeira nota:");  //mostrar na tela
	scanf ("%f", &Num1);  //receber do usu�rio
	printf ("Insira a segunda nota:");  //mostrar na tela
	scanf ("%f", &Num2);  //receber do usu�rio 
	Media = (Num1 + Num2)/2;  //c�lculo
	printf ("O resultado da m�dia �: %f", Media);  //mostrar na tela
	if (Media>6 || Media==6){  //se sim:
		printf ("\nAluno aprovado\n"); 
	}
	else{  //se n�o:
		printf ("\nAluno reprovado");
	}
} //fim
