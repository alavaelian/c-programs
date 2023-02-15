//calcula el mayor de una lista de n numeros
#include<iostream>
using namespace std;
int main (){
int n,aux=0,i=0,mayor=-99;
cout<<"Programa que calcula el mayor de n numeros\n ingrese la cantidad>>";
cin>>n;
while (i<n){
cout<<"Ingrese el valor>>";
cin>>aux;
if(aux>mayor){
mayor=aux;
}
i++;
}
cout<<mayor;
}
