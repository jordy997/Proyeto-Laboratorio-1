#ifndef CARGA-DATOS_H_INCLUDED
#define CARGA-DATOS_H_INCLUDED

#include <iostream>
#include <stdio.h>
#include "rlutil.h"

using namespace std;
using namespace rlutil;

void cargaDatos(float vecPescador[15], int vecEspecies[9], int vecHorario[18])
{
    int codPescador, codEspecies, horas;
    float KGpescado;

    cout<<endl;
    cout<<"CARGA DE DATOS"<<endl;
    cout<<"--------------------------------"<<endl;
    cout<<endl;
    cout<<"INGRESE EL CODIGO DE PESCADOR: ";
    cin>>codPescador;
    cout<<endl;
    while(codPescador !=0 )
    {
        cout<<"INGRESE LOS KILOGRAMOS: ";
        cin>>KGpescado;
        cout<<endl;
        cout<<"INGRESE EL CODIGO DE ESPECIE: ";
        cin>>codEspecies;
        cout<<endl;
        cout<<"INGRESE EL HORARIO: ";
        cin>>horas;
        cout<<endl;
        vecPescador[codPescador-99] += KGpescado;
        vecEspecies[codEspecies/10] ++;
        vecHorario[horas] ++;

        cout<<"--------------------------------"<<endl;
        cout<<"INGRESE EL CODIGO DE PESCADOR: ";
        cin>>codPescador;
        cout<<endl;
    }
    cout<<endl;
//arreglar estilos
    system("pause");
    cls();
}



#endif // CARGA-DATOS_H_INCLUDED
