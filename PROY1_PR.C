#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>
#include <dos.h>
void main()
{
    char fechayhora[100];
    int op;
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
	gotoxy(50,6); printf("NÈMERO DE");gotoxy(52,7); printf("PLACA");
	gotoxy(65,6); printf("CANTIDAD");gotoxy(66,7); printf("PAGADA");
	/*******************INFO GENERAL***********************************/
	gotoxy(5,20);printf("CANTIDAD DE PLACA COMERCIAL: ");
	gotoxy(5,21);printf("CANTIDAD DE PLACA TAXI: ");
	gotoxy(5,22);printf("CANTIDAD DE PLACA DE BUSES: ");
	gotoxy(5,23);printf("CANTIDAD DE PLACA PARTICULARES: ");
	gotoxy(5,24);printf("TOTAL RECOLECTADO: ");
	getch();
	op=0;
    } while(op);
}