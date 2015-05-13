#include<stdio.h>
#include<conio.h>
#include<stdlib.h>


#define reg 7

void main()
{
 int x;
 long placa;
 char m,t;
 char nombre[10];

   clrscr();

   do
 {

  printf("\n\nIngrese su nombre\n");
  scanf("%s",nombre);
  printf("\nIngrese el numero de placa\n");
  scanf("%ld", &placa);

 printf("\n\nEscoja el tipo de vehiculo: \nC=Comercial\nT=Taxi\nB=buses\nP=particulares\n");
 m=getche();
	switch(m)
	{
	case 'c':
	case 'C': printf("\n\n%s", nombre); printf("\nComercial"); printf("\n%ld ",placa);
	break;
	case 't':
	case 'T':printf("\n\n%s", nombre);printf("\nTaxi");printf("\n%ld ",placa);
	break;
	case 'b':
	case 'B':printf("\n\n%s", nombre);printf("\nBuses");printf("\n%ld ",placa);
	break;
	case 'p':
	case 'P':printf("\n\n%s", nombre); printf("\nParticular");printf("\n%ld ",placa);
	break;
	default:printf("\nLa opcion elegida no existe");
	}
      printf("\n\nDesea continuar: S/N\n");
      t=getche();
      }
 while(t=='S' || t=='s');
 getch();
 }



