#include <iostream>
#include <conio.h>
#include <stdio.h>
#include "rlutil.h"
#include "funciones.h"
#include "carga-datos.h"
#include "puntoA.h"
#include "puntoB.h"
#include "puntoC.h"
#include "puntoD.h"

using namespace rlutil;
using namespace std;

int main()
{

    float vecPescador[15] = {0};
    int vecEspecies[9] = {0};
    float vecHorario[18] = {0};
    float vecKGpescado[15] = {0};
    int opcion;

    titulo();
    cout<<endl;
    menuPrincipal();
    cout<<"INGRESE UNA OPCION: "<<endl;
    locate(6,24);
    cin>>opcion;
    while(opcion != 0)
    {
        cls();

        switch(opcion)
        {
        case 1:

            cargaDatos(vecPescador, vecEspecies, vecHorario, vecKGpescado);
            break;
        case 2:
            puntoA(vecPescador);
            break;
        case 3:
            puntoB(vecEspecies);
            break;
        case 4:
            puntoC(vecHorario);
            break;
        case 5:
            puntoD(vecKGpescado);
        break;
        case 6:
            mostrar_grupo();
        break;
        case 0:
            break;
        }
        cout<<endl;
        cout<<"--------------------------------"<<endl;
        cout<<"1 - REGISTRAR CAPTURAS"<<endl;
        cout<<"2 - REPORTE A"<<endl;
        cout<<"3 - REPORTE B"<<endl;
        cout<<"4 - REPORTE C"<<endl;
        cout<<"5 - REPORTE D"<<endl;
        cout<<"6 - CREDITOS"<<endl;
        cout<<"--------------------------------"<<endl;
        cout<<"0 - SALIR"<<endl;
        cout<<endl;
        cout<<"INGRESE UNA OPCION: "<<endl;
        cin>>opcion;
        cout<<endl;
        cls();
    }
    return 0;
}
