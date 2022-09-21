/*
   file: somma_interi.c
   autore: daniele marcomini
   data: 21/9/22
   
   somma di due numeri interi e 
   stampa a schermo del risultato
   
   questo programma ha due numeri 
   di input e dopo aver fatto la somma
   genera un numero di output
   */
   #include "stdio.h" //printf, scanf
   
   int main()
   {
   	//input: due numeri interi 
   	//dichiariamo le due variabili
   	int num1, num2;
   	//e output
   	int ris;
   	
   	//input: due numeri interi 
   	printf("inserisci il primo nuumero");
   	scanf("%d",&num1);
    printf("inserisci il secondo nuumero");
   	scanf("%d",&num2);
   	
   	//elaborazione: somma
   	//assegnazione alla variabile ris il risultato
	   //dell' operazione somma di due variabili
	   ris = num1 + num2 ;
	   
	   //output: un numero intero 
	   printf ("la somma dei due numeri e' %d", ris);
	   //termina il programma
	   return 0;
	}   
	
	
