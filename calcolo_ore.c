/*
	file: calcolo_ore.c
	daniele marcomini
	5/10/22
	3 H
	
*/	
	

#include "stdio.h"
int main ()

{
	float sec1;
	
	float ore, min;
	
	printf("Inserisci i secondi");
	
	scanf("%f", &sec1);
	
	min = sec1 / 60;
	
	ore = min / 60;
	
	printf("Il risultato e' %.4f \n", ore);
	
	printf("Il risultato e' %.2f", min);
	
	return 0;
}
