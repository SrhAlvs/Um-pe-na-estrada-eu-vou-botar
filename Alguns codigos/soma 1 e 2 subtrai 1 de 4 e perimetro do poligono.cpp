#include <stdio.h>
#include <locale.h>  //inclus�o de bibliotecas
int main ()
{
	setlocale (LC_ALL, "Portuguese");  //escolhendo linguagem
		//fim do cabe�alho
	float abc1;  //iniciando as vari�veis 
	float abc2; 
	float abc3; 
	float abc4; 
	float Adic; 
	float Subt; 
	float Peri;
	abc1, abc2, abc3, abc4, Adic, Subt, Peri = 0; //garantindo valor inicial das vari�veis
	printf ("Este programa recebe quatro valores, onde ele soma os dois primeiros; subtrai o primeiro do �ltimo e calcula o per�metro de um pol�gono.");  //mostrar na tela
	printf ("\nInsira o primeiro valor:");  //mostrar na tela
	scanf ("%f", &abc1);  //receber do usu�rio
	printf ("Insira o segundo valor:");  //mostrar na tela
	scanf ("%f", &abc2);  //receber do usu�rio
	printf ("Insira o terceiro valor:");  //mostrar na tela
	scanf ("%f", &abc3);  //receber do usu�rio
	printf ("Insira o quarto valor:");  //mostrar na tela
	scanf ("%f", &abc4);  //receber do usu�rio
	Adic = abc1 + abc2;  //c�lculo
	Subt = abc1 - abc4;  //c�lculo
	Peri = abc1 + abc2 + abc3 + abc4;  //c�lculo 
	printf ("A soma do primeiro valor com o segundo � %f", Adic);  //mostrar na tela
	printf ("\nA subtra��o entre o primeiro e o quarto valor � %f", Subt);  //mostrar na tela
	printf ("\nO per�metro do pol�gono � %f", Peri);  //mostrar na tela
}  //fim
