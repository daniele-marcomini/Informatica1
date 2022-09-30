/*
   file: calcola_area_cerchio.c
   autore: daniele marcomini
   data: 30/09/22
   
   calcolq l area del cerchio e 
   stampa a schermo del risultato
   
   */
   
#include "stdio.h" //print, scanf
#define PI_GRECO 3.14
int main()
{
	int num1; 										// dichiara le variabili di input 
	
	float area;										// chiarara l output
	
	printf ("Inserisci il ragggio del cerchio");	//input raggio
	
	scanf ("%d", &num1);
	
	area = num1 * num1 * PI_GRECO; 
	
	printf ("l area del cerchio e' %.2f" , area);	//output area del cerchio
	
	return 0; 										//termino il programma
	
}
