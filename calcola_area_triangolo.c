/*
   file: calcola_area_triangolo.c
   autore: daniele marcomini
   data: 26/09/22
   
   calcolq l area del triangolo e 
   stampa a schermo del risultato
   
   questo programma ha due numeri 
   di input e dopo aver calcolato  l area 
   genera un numero di output
   */

#include "stdio.h"
int main ()
{
	float base, altezza, area;			// dichiaro le variabili con la virgola

	printf("inserisci la base");		// stampare la base 

	scanf("%f", &base);					//leggere la base 

	printf("inserisci l altezza");		//stampare l altezza 
	
	scanf("%f", &altezza);				//leggere l altezza

	area = base*altezza;    			//assegnazione area 

	printf("l area e' %f",area);		//stampare la base
	
	return 0;							//chiudere programma
	
	
}
