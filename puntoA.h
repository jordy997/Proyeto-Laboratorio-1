#ifndef PUNTOA_H_INCLUDED
#define PUNTOA_H_INCLUDED

#include <iostream>
#include <stdio.h>
#include "rlutil.h"
#include "carga-datos.h"

using namespace std;
using namespace rlutil;

void puntoA(float vecPescador[15])
{
    int mayorCodigo;
    float mayorPuntaje;
    int contadorPescador = 0;

    for(int c=0; c<15; c++)
    {
        if(vecPescador[c] != 0)
        {
            contadorPescador++;
        }
    }
    if(contadorPescador != 0 )
    {
        for(int i = 1; i <= 15; i++)
        {
            if(i==1)
            {
                mayorPuntaje = vecPescador[i];
                mayorCodigo = i;
            }
            else
            {
                if(vecPescador[i] > mayorPuntaje)
                {
                    mayorPuntaje = vecPescador[i];
                    mayorCodigo = i;
                }
            }
        }
        cout<<"EL CODIGO DE PESCADOR GANADOR ES: "<<mayorCodigo  + 99<<endl;
        cout<<"EL PUNTAJE OPTENIDO ES: "<<mayorPuntaje<<endl;
    }
    else
    {
        cout<<"SE REQUIERE UNA CARGA DE DATOS."<<endl;
    }
    cout<<endl;
    system("pause");
    cls();
}

#endif // PUNTOA_H_INCLUDED
