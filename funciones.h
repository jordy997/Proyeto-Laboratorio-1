#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED

#include <cstring>
#include <cstdlib>
#include <iostream>
#include "rlutil.h"
#include "carga-datos.h"

using namespace std;
using namespace rlutil;

void underlineDraw(int x, int y, int m);
void asignar_especie(int, char []);

void titulo()
{
    locate(46, 3);
    setColor(BLUE);
    cout<<"BIENVENIDOS AL TORNEO DE PESCA 2020";
    underlineDraw(44, 4, 36);
}

void menuPrincipal()
{
    locate(6,6);
    cout<<"1 - REGISTRAR CAPTURAS"<<endl;
    locate(6,8);
    cout<<"2 - REPORTE A"<<endl;
    locate(6,10);
    cout<<"3 - REPORTE B"<<endl;
    locate(6,12);
    cout<<"4 - REPORTE C"<<endl;
    locate(6,14);
    cout<<"5 - CREDITOS"<<endl;
    locate(6,16);
    cout<<"--------------------------------"<<endl;
    locate(6,18);
    cout<<"0 - SALIR"<<endl;
    locate(6,20);
}

void asignar_especie(int nro, char nombre[])
{
    switch(nro)
    {
    case 1:
        strcpy(nombre,"ANCHOA");
        break;
    case 2:
        strcpy(nombre,"PEJERREY");
        break;
    case 3:
        strcpy(nombre,"BAGRE");
        break;
    case 4:
        strcpy(nombre,"BOGA");
        break;
    case 5:
        strcpy(nombre,"CABALLA");
        break;
    case 6:
        strcpy(nombre,"CARPA");
        break;
    case 7:
        strcpy(nombre,"TRUCHA PATAGONICA");
        break;
    case 8:
        strcpy(nombre,"DORADO");
        break;
    case 9:
        strcpy(nombre,"LISA");
        break;
    }
}

void mostrar_grupo()
{
    cls();
    setColor(GREEN);
    locate(40, 2);
    cout<<"***********************"<<endl;
    locate(50, 4);
    cout<<"TEAM"<<endl;
    locate(40, 6);
    cout<<"****** SHARK BOY ******"<<endl;
    locate(40, 8);
    cout<<"**** LEGAJO: 22361 ****"<<endl;
    locate(40, 10);
    cout<<"** DE LA CRUZ MARCK **"<<endl;
    locate(40, 12);
    cout<<"***********************"<<endl;
    resetColor();
    setColor(WHITE);
    system("pause");
    cls();
}

void underlineDraw(int x, int y, int m)
{
    setColor(LIGHTBLUE);
    for(int i=0; i<=m; i++)
    {
        x++;
        locate(x,y);
        printf("%c", 196);
    }
    setColor( WHITE);
}

#endif // FUNCIONES_H_INCLUDED
