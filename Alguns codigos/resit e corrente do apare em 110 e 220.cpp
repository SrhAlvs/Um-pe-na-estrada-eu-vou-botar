#include <stdio.h>
#include <locale.h> 	//inclus�o de bibliotecas
int main ()
{
	setlocale(LC_ALL, "Portuguese"); 	//escolhendo a linguagem
	//final do cabe�alho
	float Potencia; 	//iniciando vari�veis 
	float Corrente1; 	
	float Corrente2; 	
	float Resistencia1; 
	float Resistencia2; 	
	Potencia,Corrente1,Corrente2,Resistencia1,Resistencia2=0; 	//garantindo valor inicial da vari�vel
	printf ("Este programa calcula e mostra a resist�ncia e a corrente de um aparelho se ligado em 110 ou 220 Volts. Insira a pot�ncia do aparelho:"); 	//mostrar na tela
	scanf ("%f", &Potencia); 	//receber do usu�rio
	Corrente1 = Potencia/110; 	//c�lculo
	Corrente2 = Potencia/220; 	//c�lculo
	Resistencia1 = 110/Corrente1; 	//c�lculo
	Resistencia2 = 220/Corrente2; 	//c�lculo
	printf ("A corrente do aparelho quando ligada em 110 Volts � igual a %f", Corrente1); 	//mostrar na tela 
	printf (" Ampere e sua resist�ncia � igual a %f", Resistencia1); 	//mostrar na tela 
	printf (" Ohm."); 	//mostrar na tela
	printf ("\nA corrente do aparelho quando ligada em 220 Volts � igual a %f", Corrente2); 	//mostrar na tela
	printf (" Ampere e sua resist�ncia � igual a %f", Resistencia2); 	//mostrar na tela
	printf (" Ohm.");
} 	//fim
