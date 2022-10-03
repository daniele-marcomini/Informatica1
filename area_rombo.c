/*
   file: area_rombo.c
   autore: daniele marcomini
   data: 3/09/22
   
   calcolq l area del rombo e 
   stampa a schermo del risultato
   
   */





#include "stdio.h"
#include "math.h"

int main ()

{
	float lato, d1;// input
	
	float d2;// di lavoro
	
	float area, perimetro;//output
	
	printf ("inserisci il lato");n// input del lato
	
	scanf("%f", &lato);
	
	printf ("inserisci il secondo lato");//input diagonale
	
	scanf("%f", &d1);
	
	perimetro= lato * 4;// calcla il perimetro
	
	d2= sqrt (lato * lato - d1/2 * d1/2);//calcolo diagonle mancante
	
	area= (d1 * d2)/2;//calcola l area
	
	printf("l area del rombo e' %.2f", area);//output del risultato; area
	
	printf("il perimetro del rombo e' %.2f", perimetro);//output del risultato; perimetro
	
	return 0;
	
	
}

