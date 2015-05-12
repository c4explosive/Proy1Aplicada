#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>
void main()
{
    char fechayhora[100];
    time_t lt;
    lt=time(NULL);
    clrscr();
    gotoxy(30,2); printf("MUNICIPIO DE PANAMµ");
    gotoxy(25,3); printf("INFORME DE PLACAS VEHICULARES");
    /*******************Hora******************************/
    gotoxy(1,4);
    printf(ctime(&lt));
    getch();
}