#ifndef PUNTOC_H_INCLUDED
#define PUNTOC_H_INCLUDED

#include <iostream>
#include <stdio.h>
#include "rlutil.h"
#include "carga-datos.h"

using namespace std;
using namespace rlutil;

void puntoC(float vecHorario[18])
{

    float porcentaje;
    float contador_horario = 0;
    float contadorHorario = 0;

    for(int x=0; x<18; x++)
    {
        if(vecHorario[x] != 0)
        {
            contador_horario += vecHorario[x];
            contadorHorario ++;
        }
    }

    if(contadorHorario != 0)
    {

        for(int i=1; i<=18; i++)
        {
            if(vecHorario[i] != 0)
            {
                porcentaje=vecHorario[i]*100/contador_horario;

                cout<<"EL PORCENTAJE DE CAPTURAS A LAS "<<i+5<<"HS ES: "<<porcentaje<<"%"<<endl;
                cout<<endl;
                cout<<"LA CANTIDAD DE CAPTURAS EN ESE HORARIO FUERON: "<<vecHorario[i]<<endl;
                cout<<"-----------------------------------------------------"<<endl;
                cout<<endl;
            }
        }
    }
    else
    {
        cout<<"NECESITA CARGAR DATOS PARA PODER INGRESAR A ESTA PANTALLA."<<endl;
    }
    system("pause");
    cls();
}

#endif // PUNTOC_H_INCLUDED
