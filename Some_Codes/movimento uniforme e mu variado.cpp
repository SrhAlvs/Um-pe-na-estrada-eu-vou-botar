#include <stdio.h>
#include <locale.h> 	//inclus�o de bibliotecas
int main ()
{
	setlocale(LC_ALL, "Portuguese"); 	//escolhendo a linguagem
	//final do cabe�alho
	float Escolha; 	//iniciando vari�veis
	float PInicial1;
	float Vel; 
	float ITemp1;
	float PInicial2; 
	float VInicial; 
	float ITemp2;
	float Acel; 
	Escolha,PInicial1,Vel,ITemp1,PInicial2,VInicial,ITemp2,Acel=0; 	//garantindo valoe inicial da vari�vel
	printf ("Este programa possibilita a escolha entre os c�lculos de movimento uniforme ou movimento uniforme variado, recebe as informa��es necess�rias para o c�lculo e disponibiliza a f�rmula pronta e preenchida para resolver e obter a posi��o final."); 	//mostrar na tela
	printf ("\nDigite 1 para selecionar o c�culo do movimento uniforme ou 2 para o c�lculo do movimento uniforme variado:"); 	//mostrar na tela
    scanf ("%f",&Escolha); 	//receber do usu�rio
    if (Escolha==1){ 	//se sim:
     printf ("\nInsira a posi��o inicial em metros:"); 	//mostrar na tela
     scanf ("%f",&PInicial1); 	//receber do usu�rio
     printf ("\nInsira a velocidade do corpo em metros por segundo:"); 	//mostrar na tela
     scanf ("%f",&Vel); 	//receber do usu�rio
     printf ("\nInsira o intervalo de tempo em segundos:"); 	//mostrar na tela
     scanf ("%f",&ITemp1); 	//receber do usu�rio
     printf ("\nO c�lculo a ser feito �: %f", PInicial1); 	//mostrar na tela
     printf (" + %f", Vel); 	//mostrar na tela
     printf (" * %f", ITemp1); 	//mostrar na tela
	}
	else{
	 if (Escolha==2){ 	//se sim:
	  printf ("\nInsira a posi��o inicial em metros:"); 	//mostrar na tela
	  scanf ("%f",&PInicial2); 	//receber do usu�rio 
	  printf ("\nInsira a velocidade inicial em metros por segundo:"); 	//mostrar na tela
      scanf ("%f",&VInicial); 	//receber do usu�rio
      printf ("\nInsira o intervalo de tempo em segundos:"); 	//mostrar na tela
      scanf ("%f",&ITemp2); 	//receber do usu�rio
      printf ("\nInsira a acelera��o do corpo em metros por segundo:"); 	//mostrar na tela
      scanf ("%f",&Acel); 	//receber do usu�rio
      printf ("\nO c�lculo a ser feito �: %f", PInicial2); 	//mostrar na tela
      printf (" + %f", VInicial); 	//mostrar na tela
      printf (" * %f", ITemp2); 	//mostrar na tela
      printf (" + ( %f", Acel); 	//mostrar na tela 
      printf (" * %f", ITemp2); 	//mostrar na tela 
      printf ("^2 ) / 2"); 	//mostrar na tela
	}
	else{ 	//se n�o:
	  printf ("\nNenhuma op��o foi selecionada."); 	//mostrar na tela
	}}
} 	//fim
