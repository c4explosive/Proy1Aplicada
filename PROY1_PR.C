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
	gotoxy(34,2); printf("MUNICIPIO DE PANAMµ");
	gotoxy(26,3); printf("INFORME DE PLACAS VEHICULARES");
	/*******************HORA******************************/
	    gotoxy(1,4);
	    lt=time(NULL);
	    printf(ctime(&lt));
	    //time();
	/*******************ENCABEZADO*************************************/
	gotoxy(5,6); printf("NOMBRE DEL");gotoxy(5,7); printf("PROPIETARIO");
	gotoxy(23,6); printf("TIPO");
	gotoxy(34,6); printf("DESCRIPCI¢N");
	gotoxy(50,6); printf("NÈMERO DE");gotoxy(52,7); printf("PLACA");
	gotoxy(65,6); printf("CANTIDAD");gotoxy(66,7); printf("PAGADA");
	/********************************************************************/
	gotoxy(6,9);printf("Prueba");
	getch();
	op=0;
    } while(op);
}