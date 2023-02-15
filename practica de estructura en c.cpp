//practica de clase
#include<iostream>
#include<string.h>
using namespace std;
int main ()
{
	struct persona {
		string nombre;
		string apellido ;
		int edad;
		float peso;
	};
	persona p[6];
	for(int i=0;i<6;i++)
	{
	cout<<"ingreese el nombre:";cin>>p[i].nombre;
	cout<<"ingrese el apellido:";cin>>p[i].apellido;
	cout<<"ingrese la edad";cin>>p[i].edad;
	cout<<"ingrese peso:";cin>>p[i].peso;
	}

	for(int i=0;i<6;i++)
	{
	cout<<p[i].nombre<<" ";
	cout<<p[i].apellido<<" ";
	cout<<p[i].edad<<" ";
	cout<<p[i].peso<<" ";
	cout<<endl;
	}
}
