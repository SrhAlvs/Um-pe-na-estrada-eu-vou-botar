#include <stdio.h>
#include <locale.h> 	//inclus�o de bibliotecas
int main ()
{
	setlocale(LC_ALL, "Portuguese"); 	//escolhendo a linguagem
	//final do cabe�alho
	float m1b1; 	//iniciando as vari�veis
	float m1b2; 
	float m2b1; 
	float m2b2; 
	float Media1; 
	float Media2; 
	m1b1,m1b2,m2b1,m2b2,Media1,Media2=0; 	//garantindo valor inicial da vari�vel
	printf ("Este programa calcula a m�dia de duas mat�rias por dois bimestres e ao final diz se foi aprovado ou n�o. Insira a nota de 0 a 10 do primeiro bimestre da primeira mat�ria:"); 	//mostrar na tela
	scanf ("%f",&m1b1); 	//receber do usu�rio
	printf ("Insira a nota de 0 a 10 do segundo bimestre da primeira mat�ria:"); 	//mostrar na tela
	scanf ("%f",&m1b2); 	//receber do usu�rio
	printf ("Insira a nota de 0 a 10 do primeiro bimestre da segunda mat�ria:"); 	//mostrar na tela
	scanf ("%f",&m2b1); 	//receber do usu�rio
	printf ("Insira a nota de 0 a 10 do segundo bimestre da segunda mat�ria:"); 	//mostrar na tela
	scanf ("%f",&m2b2); 	//receber do usu�rio
	if (m1b1<=10){ 	//se sim:
	if (m1b1>=0){ 	//se sim:
	 if (m1b2<=10){ 	//se sim:
	 if (m1b2>=0){ 	//se sim:
	  if (m2b1<=10){ 	//se sim:
	  if (m2b1>=0){ 	//se sim:
	   if (m2b2<=10){ 	//se sim:
	   if (m2b2>=0){ 	//se sim:
	 Media1 = (m1b1 + m1b2)/2; 	//c�lculo
	 Media2 = (m2b1 + m2b2)/2; 	//c�lculo
 	 printf ("Na primeira mat�ria a m�dia foi de %f", Media1); 	//mostrar na tela
	 printf ("\nNa segunda mat�ria a m�dia foi de %f", Media2); 	//mostrar na tela
	  if (Media1>=6){ 	//se sim:
	  printf ("\nAprovado na primeira mat�ria."); 	//mostrar na tela
	 }
	  else { 	//se n�o:
	  printf ("\nReprovado na primeira mat�ria."); 	//mostrar na tela
	 }
	  if (Media2>=6){ 	//se sim:
	  printf ("\nAprovado na segunda mat�ria."); 	//mostrar na tela
	 }
	  else { 	//se n�o:
	  printf ("\nReprovado na segunda mat�ria."); 	//mostrar na tela
	 }
	 }}}}}}}}
	else { 	//se n�o:
	} 
} 	//fim
