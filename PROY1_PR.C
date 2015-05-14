/*
 	Universidad Tecnológica de Panamá
   Facultad de Ingeniería en Sistemas Computacionales
   	Ingeniería en Sistemas y Computación
 
 
      Herramientas de Programación Aplicada II
 
 
  		Proyecto no.1
  	Conceptos básicos del lenguaje C
 
 
  	Prof.: Ing. Janitza de Justiniani
 
 	  Angel Espinosa 8-905-1352
 	  Heidys Miranda 4-777-1525
 	  María T. Rodríguez 8-900-1207
 
 		  1-IL-121

		  13/5/15
 
*/
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>
#include <dos.h>
void main()
{
    char nombre[100]; //Esto es para el nombre, ya que en C no permite el tipo de dato "string".
    int pv=1,ing=1,pmm=1, cpc=0,cpt=0,cpb=0,cpp=0,yp=8;
    float atotal=0,total=0,menor=0,mayor=0;
    long placa;
    char m,t,cont;
    time_t lt;
    clrscr();
    do
    {
	gotoxy(32,2); printf("MUNICIPIO DE PANAMµ");
	gotoxy(27,3); printf("INFORME DE PLACAS VEHICULARES");
	/*******************HORA******************************/
	gotoxy(1,4);
	lt=time(NULL);
	printf(ctime(&lt));
	/*******************ENCABEZADO*************************************/
	gotoxy(5,6); printf("NOMBRE DEL");gotoxy(5,7); printf("PROPIETARIO");
	gotoxy(23,6); printf("TIPO");
	gotoxy(34,6); printf("DESCRIPCI¢N");
	gotoxy(50,6); printf("NéMERO DE");gotoxy(52,7); printf("PLACA");
	gotoxy(65,6); printf("CANTIDAD");gotoxy(66,7); printf("PAGADA");
	/*******************INFO GENERAL***********************************/
	if(ing)
	{
	    gotoxy(5,15);printf("CANTIDAD DE PLACA COMERCIAL: %d",cpc);
	    gotoxy(5,16);printf("CANTIDAD DE PLACA TAXI: %d",cpt);
	    gotoxy(5,17);printf("CANTIDAD DE PLACA DE BUSES: %d",cpb);
	    gotoxy(5,18);printf("CANTIDAD DE PLACA PARTICULARES: %d",cpp);
	    gotoxy(5,19);printf("TOTAL RECOLECTADO: %.2f", atotal);
	    gotoxy(5,20);printf("NOMBRE DEL PROPIETARIO: ");
	    gotoxy(5,21);printf("TOTAL DE DINERO PAGADO (MAYOR): %.2f",mayor);
	    gotoxy(5,22);printf("NOMBRE DEL PROPIETARIO:  ");
	    gotoxy(5,23);printf("TOTAL DE DINERO PAGADO (MENOR): %.2f",menor);
	    ing=0;
	}
	/*******************LECTURA****************************************/
	//FIXME: IMPRIMIR TODO DE UNA SOLA VEZ o POCO a POCO
	do
	{
	     gotoxy(5,24);clreol();printf("Escoja el tipo de vehiculo: C=Comercial; T=Taxi; B=buses; P=particulares: ");
	     m=getche();
	     switch(m)
	     {
	     	case 'c': case 'C': case 't': case 'T': case 'b': case 'B': case 'p': case 'P': pv=1; break;
	     	default: gotoxy(5,24);clreol(); printf("La opcion elegida no existe"); pv=0; //FIXME: ESTO NO SE MUESTRA
	     }
	}while(pv==0);
	gotoxy(5,24); clreol(); printf("Ingrese el numero de placa: ");
	scanf("%ld", &placa);
	gotoxy(5,24); clreol(); printf("Ingrese su nombre: ");
	scanf("%s",nombre);
	gotoxy(5,24); clreol(); printf("Ingrese el total de dinero pagado: ");
	scanf("%f", &total);
	/***************************COMPARACI¢N E IMPRESION******************************************/
	atotal+=total;
	gotoxy(5,19);printf("TOTAL RECOLECTADO: %.2f", atotal);
	if(pmm)
	{
	    mayor=total;
	    gotoxy(5,20);printf("NOMBRE DEL PROPIETARIO: %s", nombre);
	    gotoxy(5,21);printf("TOTAL DE DINERO PAGADO (MAYOR): %.2f",mayor);
	    menor=total;
	    gotoxy(5,22);printf("NOMBRE DEL PROPIETARIO:  %s", nombre);
	    gotoxy(5,23);printf("TOTAL DE DINERO PAGADO (MENOR): %.2f",menor);
	    pmm=0;
	}
	else
	{
	    if(total>mayor)
	    {
		 mayor=total;
		 gotoxy(5,20);printf("NOMBRE DEL PROPIETARIO: %s", nombre);
		 gotoxy(5,21);printf("TOTAL DE DINERO PAGADO (MAYOR): %.2f",mayor);
	    }
	    if(total<menor)
	    {
		menor=total;
		gotoxy(5,22);printf("NOMBRE DEL PROPIETARIO:  %s", nombre);
		gotoxy(5,23);printf("TOTAL DE DINERO PAGADO (MENOR): %.2f",menor);
	    }
	}	
	switch(m)
	{
		case 'c': case 'C': gotoxy(24,yp);printf("C"); gotoxy(35,yp);printf("Comercial");
				    cpc++;
				    break;
		case 't': case 'T': gotoxy(24,yp);printf("T"); gotoxy(35,yp);printf("Taxi");
				    cpt++;
				    break;
		case 'b': case 'B': gotoxy(24,yp);printf("B"); gotoxy(35,yp);printf("Buses");
				    cpb++;
				    break;
		case 'p': case 'P': gotoxy(24,yp);printf("P"); gotoxy(35,yp);printf("Particular");
				    cpp++;
				    break;
	}
	gotoxy(51,yp); printf("%d", placa);
	gotoxy(6,yp); printf("%s", nombre);
	gotoxy(66,yp); printf("%.2f",total);
	gotoxy(5,15);printf("CANTIDAD DE PLACA COMERCIAL: %d",cpc);
	gotoxy(5,16);printf("CANTIDAD DE PLACA TAXI: %d",cpt);
	gotoxy(5,17);printf("CANTIDAD DE PLACA DE BUSES: %d",cpb);
	gotoxy(5,18);printf("CANTIDAD DE PLACA PARTICULARES: %d",cpp);
	yp++;
	gotoxy(5,24); clreol(); printf("¨Desea continuar? S/n: ");
	cont=getche();
    } while(cont=='S' || cont=='s');
    getch();
}
