#ifndef CARGA-DATOS_H_INCLUDED
#define CARGA-DATOS_H_INCLUDED

#include <iostream>
#include <stdio.h>
#include "rlutil.h"

using namespace std;
using namespace rlutil;

void cargaDatos(float vecPescador[15], int vecEspecies[9], float vecHorario[18], float vecKGpescado[15], int vecCEspecies[15])
{
    int codPescador, codEspecies, horas, ant, contEspecies=0;
    float KGpescado, pPeso=0;

    cout<<endl;
    cout<<"CARGA DE DATOS"<<endl;
    cout<<"--------------------------------"<<endl;
    cout<<endl;
    cout<<"INGRESE EL CODIGO DE PESCADOR: ";
    cin>>codPescador;
    while(codPescador<0 || codPescador<100 && codPescador>1|| codPescador>114)
    {
        cout<<endl;
        cout<<"CODIGO INCORRECTO INGRESE UN CODIGO DE PESCADOR >=100 o <=114"<<endl;
        cout<<endl;
        cout<<"INGRESE EL CODIGO DE PESCADOR: ";
        cin>>codPescador;
    }

    cout<<endl;
    while(codPescador !=0 )
    {
        ant=codPescador;
        cout<<"INGRESE EL CODIGO DE ESPECIE: ";
        cin>>codEspecies;
        while(codEspecies!=10 && codEspecies!= 20 && codEspecies!= 30 &&
                codEspecies!= 40 && codEspecies!= 50 && codEspecies!= 60 &&
                codEspecies!= 70 && codEspecies!= 80 && codEspecies!= 90
             )
        {
            if(codEspecies == 20){
                vecCEspecies[codPescador-100] ++;
              }
            cout<<endl;
            cout<<"INGRESE EL CODIGO DE ESPECIE QUE SEAN: 10, 20, 30, 40, 50, 60, 70, 80 o 90."<<endl;
            cout<<endl;
            cout<<"INGRESE EL CODIGO DE ESPECIE: ";
            cin>>codEspecies;
        }


        cout<<endl;
        cout<<"INGRESE EL HORARIO: ";
        cin>>horas;
        while(horas<6 || horas>24 )
        {
            cout<<endl;
            cout<<"INGRESE UN HORARIO ENTRE LAS 6AM Y 23PM."<<endl;
            cout<<endl;
            cout<<"INGRESE EL HORARIO: ";
            cin>>horas;
        }
        vecHorario[horas-5] ++;

        cout<<endl;
        cout<<"INGRESE LOS KILOGRAMOS: ";
        cin>>KGpescado;
        while(codEspecies==10 && KGpescado<0.5 || codEspecies==20 && KGpescado<2 ||
                codEspecies==30 && KGpescado<4 || codEspecies==40 && KGpescado<5 ||
                codEspecies==50 && KGpescado<1 || codEspecies==60 && KGpescado<5 ||
                codEspecies==70 && KGpescado<1.5 || codEspecies==80 && KGpescado<3 || codEspecies==90 && KGpescado<2.5
             )
        {
            cout<<endl;
            cout<<"EL PESO INGRESADO NO CORRESPONDE AL MINIMO DE LA ESPECIE."<<endl;
            cout<<endl;
            cout<<"INGRESE LOS KILOGRAMOS: ";
            cin>>KGpescado;
        }

        if(ant==codPescador)
        {
            if( vecKGpescado[codEspecies/10] < KGpescado)
            {
                vecKGpescado[codEspecies/10] = KGpescado;
            }
        }
        cout<<endl;
        vecPescador[codPescador-100] += KGpescado;

        vecEspecies[codEspecies/10] ++;

        cls();
        cout<<"--------------------------------"<<endl;
        cout<<"INGRESE EL CODIGO DE PESCADOR: ";
        cin>>codPescador;
        while( codPescador<0 || codPescador<100 && codPescador>1 || codPescador>114)
        {
            cout<<endl;
            cout<<"CODIGO INCORRECTO INGRESE UN CODIGO DE PESCADOR >=100 || <=114"<<endl;
            cout<<endl;
            cout<<"INGRESE EL CODIGO DE PESCADOR: ";
            cin>>codPescador;
        }
        cout<<endl;
    }
    cout<<endl;
    system("pause");
    cls();
}



#endif // CARGA-DATOS_H_INCLUDED
