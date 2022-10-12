/*

	file : sec_min_ore.c
	nome : daniele marcomini
	data : 12/10/22
	classe : 3 H
	
*/

#include "stdio.h"

int main()

{
	//dichiara variabile di input
	int sec1;
	
	//dichiariamo le variabili di output
	int min, ore;
	
	//input 
	printf ("PROGRAMMA DI DANIELE MARCOMINI 3 H\n");
	printf("Inserisci i secondi\t");
	scanf ("%d", &sec1);
	
	min = (sec1 - sec1 % 60) / 60;
	
	//istruzioni per passare da input ad output
	//assegna alla variabile ore il risultato dell espressione
	ore = (min - min % 60)/ 60;
	
	//assegnazione alla variabile min il risultato dell espressione
	min = min - min % 60;
	
	//assegnzione alla variabile sec2 il risultato dell espressione
	sec1 = sec1 * 1;
	
	//visualizza in output
	printf ("Ore: %d, Minuti: %d, Secondi: %d", ore, min, sec1);
	
	//concludo il programma 
	return 0;
	
	
}
