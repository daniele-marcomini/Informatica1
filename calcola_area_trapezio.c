/*

	file : calcola_area_trapezio.c
	nome : daniele marcomini
	data : 7/10/22
	classe : 3 H
	
*/

#include "stdio.h"

int main ()

{
	//input
	int B1, b2, h;
	//lavoro
	int L1 ,l2;
	//output
	int area, perimetro;
	//input diagonale maggiore
	printf("Inserire il valore della diagonale maggiore\n");
	scanf("%d", &B1);
	//input diagonale minore
	printf("Inserisci il valore della diagonale minore\n");
	scanf("%d", &b2);
	//input altezza
	printf("Inserisci il valore dell' altezza\n");
	scanf("%d", &h);
	//input lato minore
	printf("Inserisci il valore del lato minore\n");
	scanf("%d", &L1);
	//lato maggiore
	printf("Inserisci il valore del lato maggiore\n");
	scanf("%d", &l2);
	//calcolo area
	area = ((B1 + b2)*h)/2;
	//calacola perimetro
	perimetro = B1 + b2 + L1 + l2;
	//output area
	printf("L area del trapezio e' \n %d \n" , area);
	//output perimetro
	printf("Il perimetro del trapezio e'\n %d", perimetro);
	
	return 0;

}


