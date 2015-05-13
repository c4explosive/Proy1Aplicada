#include<stdio.h>
#include<conio.h>
#include<stdlib.h>


#define reg 7

void main()
{
 int x,cont=0;
 char m;
 char nombre[10];
 
    clrscr();
   
   do
 {
 printf("\n\nEscoja el tipo de vehiculo: \nC=Comercial\nT=Taxi\nB=buses\nP=particulares\n");
 m=getche();
	switch(m)
	{
	case 'c':
	case 'C':printf("\n\nComercial\n");
	break;
	case 't':
	case 'T':printf("\n\nTaxi\n");
	break;
	case 'b':
	case 'B':printf("\n\nBuses\n");
	break;
	case 'p':
	case 'P':printf("\n\nParticular\n");
	break;
	default:printf("\n\nLa opcion elegida no existe\n\n");
	}
      cont=cont+1;
      }
 while(cont<=reg);
 getch();
 }



