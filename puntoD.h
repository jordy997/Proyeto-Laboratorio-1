#ifndef PUNTOD_H_INCLUDED
#define PUNTOD_H_INCLUDED

#include <iostream>
#include <stdio.h>
#include "rlutil.h"
#include "carga-datos.h"

using namespace std;
using namespace rlutil;

void puntoD(float vecKGpescado[15])
{
    int contadorKG = 0;

    for(int x=0; x<15; x++)
    {
        if(vecKGpescado[x] != 0)
        {
            contadorKG++;
        }
    }
    if(contadorKG != 0)
    {
        for(int c=1; c<=15; c++)
        {
            if(vecKGpescado[c] != 0){
                cout<<endl;
                cout<<"CODIGO DE PESCADOR: "<<c+99<<endl;
                cout<<"EL MAYOR PESO REGISTRADO ES: "<<vecKGpescado[c]<<endl;
            }
        }

    }
    else
    {
        cout<<"SE REQUIERE UNA CARGA DE DATOS."<<endl;
    }
    cout<<endl;

}


#endif // PUNTOD_H_INCLUDED
