#ifndef PUNTOB_H_INCLUDED
#define PUNTOB_H_INCLUDED

#include <iostream>
#include <stdio.h>
#include "rlutil.h"
#include "carga-datos.h"

using namespace std;
using namespace rlutil;

void puntoB(int vecEspecies[9])
{
    int contadorEspecies = 0;

    for(int c=1; c<=9; c++) //TIENE QUE CUMPLIRSE ESTA CONDICION PARA PODER ENTRAR Y VER LOS DATOS
    {
        if(vecEspecies[c] !=0)
        {
            contadorEspecies ++;
        }
    }

    if(contadorEspecies != 0)
    {
        char nombre_especie[20];
        for(int x=1; x<=9; x++)
        {
            if(vecEspecies[x] != 0 )
            {
                asignar_especie(x, nombre_especie); //ESTO TRAE LOS NOMBRES Y LOS ASIGNA A SU RESPECTIVO CODIGO
                cout<<"CODIGO DE ESPECIE "<<x * 10<<endl;
                cout<<"EL NOMBRE DE LA ESPECIE ES: "<<nombre_especie<<endl;
                cout<<"CANTIDAD DE VECES CAPTURADO: "<<vecEspecies[x]<<endl;
                cout<<"--------------------------------"<<endl;
            }
        }
    }
    else
    {
        cout<<"SE REQUIERE COMPLETAR TODOS LOS DATOS PARA INGRESAR A ESTA OPCION!"<<endl; //MENSAJE PARA DECIRLE AL USUARIO QUE TIENE QUE CARGAR LOS DATOS ANTES.
    }

    system("pause");
    cls();
}

#endif // PUNTOB_H_INCLUDED
