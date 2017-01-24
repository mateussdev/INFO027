#include <stdio.h>
#include <stdlib.h>

/*
	Quest�o 15 - Num dia de sol, voc� deseja medir a altura de um pr�dio, por�m, a trena n�o �
	suficientemente longa. Assumindo que seja poss�vel medir sua sombra e a do pr�dio no
	ch�o, e que voc� lembre da sua altura, fa�a um programa para ler os dados necess�rios e
	calcular a altura do pr�dio.
	
	Digamos que vc tenha 1,70m e sua sombra 50cm 
	e a sombra do predio 15m. 
	Obs.: 50 cm = 0,5m 
	Faremos uma regra de tr�s simples: 
	1,70m est� para 0,5 m assim como x est� para 15m. 
	Logo: 
	1,70/0,5 = x/15 
	0,5x = 25,5 
	x = 25,5/0,5 
	x = 51 m (a altura do pr�dio). 
	Isso � raz�o e propor��o! 
	
	alturaDo predio = altura da pessoa
	_______________   ________________
	
	sombraPredio      sombra da pessoa
	
	altura do predio = altura da pessoa * sombra do predio
	                   ___________________________________
	                   sombra da pessoa
	
	
*/

int main(){
	
	float alturaDoPredio = 0, alturaPessoa = 0, sombraPessoa = 0, sombraDoPredio = 0;
	
	printf("Insira o tamanho da sua altura: ");
	scanf("%f", &alturaPessoa);

	printf("Insira o tamanho da sua sombra: ");
	scanf("%f", &sombraPessoa);
	
	printf("Insira o tamanho da sombra do predio: ");
	scanf("%f", &sombraDoPredio);
	
	alturaDoPredio = ( alturaPessoa * sombraDoPredio ) / sombraPessoa;
		
	printf("A altura do predio e: %.2f", alturaDoPredio);
	
	return 0;
}
