#include <stdio.h> 
#include <conio.h>
#include <locale.h>       //inclus�o de bibliotecas de comandos
int main ()
{	
	setlocale(LC_ALL, "Portuguese");     //escolhendo a linguagem 
		//final do cabe�alho 
	float Resultado, grau; //iniciando as vari�veis
	int alternativa ;
	Resultado,grau=0;	//garantindo valor inicial da vari�vel
	alternativa=0 ;
	printf("Esse programa faz a convers�o de temperatura . .");// mostrar na tela
	printf("Digite 1 - Celsius para Fahreinheit, digite 2 - Fahreinheit para Celsius, digite 3 - Celsius para Kelvin, digite 4 - Kelvin para Celsius."); // mostrar na tela
	scanf("%d",&alternativa);// recebendo vari�vel
	switch(alternativa){
	 	case 1:
	 		printf("\nInsira o valor em graus Celsius: ");// mostrar na tela
	 		scanf("%f",&grau); // recebendo vari�vel
	 		Resultado = (grau * 9/5) + 32 ; // c�lculo de Celsius para Fahreinheit
	 		printf("\nO valor em  Fahreinheit � :%0.2f",Resultado);// mostrar na tela
	 		break;
	 	case 2:
	 		printf("\nInsira o valor em Fahreinheit: ");// mostrar na tela
	 		scanf("%f",&grau);// recebendo vari�vel
	 		Resultado= (grau  - 32) * 5/9 ;// c�lculo fahreinheit para Celsius
	 		printf("\nO valor em  Celsius � %0.2f",Resultado);//mostrar na tela
	 		break;
	 	case 3:
	 		printf("\nInsira o valor em Celsius: ");// mostrar na tela
	 		scanf("%f",&grau);// recebendo vari�vel
	 		Resultado= grau+273,15 ; // c�lculo de Celsius para Kelvin
	 		printf("\nO valor em  Kelvin � :%0.2f",Resultado);// mostrar na tela
	 		break;
	 	case 4:
	 		printf("Insira o valor  em Kelvin: ");// mostrar na tela
	 		scanf("%f",&grau);// recebendo vari�vel
	 		Resultado= grau- 273,15 ;// calculo de Kelvin para Celsius
	 		printf("\nO valor em  Kelvin � :%0.2f",Resultado);// mostrar na tela
	 		break;
	 	default:
	 		printf("Nenhuma das op��es foi escolhida.");// mostrar na tela 
	}
} //fim
