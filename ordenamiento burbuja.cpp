//ordena los valores
#include<iostream>
using namespace std;
int main ()
{
    int j, i ,vector[6],aux;
    for(i=0;i<6;i++)
    {
    cout<<"Ingrese los valores a ordenar";
    cin>>vector[i];
    }
    for(i=0;i<6;i++)
    {
    for(j=0;j<6;j++)
    {
    if(vector[j]>vector[j+1])
    {
    aux=vector[j];
    vector[j]=vector[j+1];
    vector[j+1]=aux;
    }
    }
    }
    for(i=0;i<6;i++)
    {
    cout<<vector[i]<<" ";
    }
    for(i=5;i>0;i--)
    {
    cout<<vector[i]<<" ";
    }
    return 0;
}
