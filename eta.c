#include "stdio.h"

int main ()

{
	int eta; //input

	printf ("Inserisci la tua eta"); //stampa a schermo la richiesta
	scanf ("%d", &eta);
	
	if( eta >= 18)
	{printf("e' maggiorenne"); //stampa a schermo la risposta 
	}
	else
	{printf ("non e' maggiorenne");
	}
}
