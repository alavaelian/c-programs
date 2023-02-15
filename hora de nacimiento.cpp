#include<stdlib.h>
#include<iostream>
#include <clocale>//sirve  para selecionar un idioma
using namespace std;
int main()
{
     setlocale(LC_CTYPE,"Spanish");//selecciona la configuracion en español permite presentar la latra ñ
    int anio_act,mes_act,dia_act,hora_act,anio_naci,mes_naci,dia_naci,hora_naci,anio;
    cout<<"Ingrese el año actual>>";
    cin>>anio_act;
    cout<<"Ingrese el mes  actual>>";
    cin>>mes_act;
    cout<<"Ingrese el dia actual>>";
    cin>>dia_act;
    cout<<"Ingrese la hora actual>>";
    cin>>hora_act;
    cout<<"Ingrese el año de nacimiento>>";
    cin>>anio_naci;
    cout<<"Ingrese el mes de nacimiento>>";
    cin>>mes_naci;
    cout<<"Ingrese dia de nacimiento>>";
    cin>>dia_naci;
    cout<<"Ingrese la hora de un nacimiento(en 24 horas)>>";
    cin>>hora_naci;
    anio=anio_act-anio_naci;

}
