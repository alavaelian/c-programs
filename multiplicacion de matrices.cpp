//Programa que multiplica 2 matrices
#include<iostream>
#include<conio.h>
#include<stdlib.h>
#include<string>
using namespace std;
int main (){
	int n=0,m=0,n1=0,m1=0;
	string c;
	float temporal;

do{
    system("cls");
	cout<<"\t\t\t PROGRAMA QUE MULTIPLICA 2 MATRICES"<<endl;
	cout<<"Elija el numero de filas de la matriz1>>";
	cin>>n;
	cout<<"Elija el numero de columnas de la matriz1>>";
	cin>>m;
	cout<<"Elija el numero de filas de la matriz2>>";
	cin>>n1;
	cout<<"Elija el numero de columnas de la matriz1>>";
	cin>>m1;
	long long int matriz1[n][m], matriz2[n1][m1],matriz3[n][m1];
	system("cls");
	if(m==n1){
	cout<<"Ingrese los datos de la matriz 1"<<endl;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cout<<"Ingrese la posicion "<<i<<" "<<j<<">>";
			cin>>matriz1[i][j];
		}
	}
	system("cls");
	cout<<"Ingrese los fatos de la matriz 2"<<endl;
	for(int i=0;i<n1;i++){
		for(int j=0;j<m1;j++){
			cout<<"Ingrese la posicion"<<i<<" "<<j<<">>";
			cin>>matriz2[i][j];
		}
	}
	system("cls");
    cout<<"\t\t\tLas matrices son:"<<endl;
    cout<<"\nA"<<endl<<endl;
    for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){

			cout<<matriz1[i][j]<<" ";
		}
		cout<<endl;

	}
	cout<<"\nB"<<endl<<endl;
	for(int i=0;i<n1;i++){
		for(int j=0;j<m1;j++){

			cout<<matriz2[i][j]<<" ";
		}
		cout<<endl;

	}
    cout<<"\nA * B"<<endl<<endl;
	for (int i = 0 ; i <n; i++ ){ //i para las filas de la matriz resultante
    for (int k = 0 ; k <m1; k++ ){ // k para las columnas de la matriz resultante
        temporal = 0 ;
        if(n1>n){
        for (int j = 0 ; j <n1; j++ ) {  //j para realizar la multiplicacion de
                                             //los elementos   de la matriz
            temporal += matriz1[i][j] * matriz2[j][k];
            matriz3[i][k] = temporal ;
            }
        }
        if(n1<n||n==n1){
        for (int j = 0 ; j <n; j++ ) {  //j para realizar la multiplicacion de
                                             //los elementos   de la matriz
            temporal += matriz1[i][j] * matriz2[j][k];
            matriz3[i][k] = temporal ;
            }
        }
            cout<<matriz3[i][k]<<" ";
        }
        cout<<endl;
    }
	}
	else{
        cout<<"Las matrices no son compatibles"<<endl;

	}
cout<<"Desea volver a intentarlo escriba \"si\" o \"no\"  >>";
cin>>c;

}
while(c=="si"||c=="s"||c=="Si"||c=="SI"||c=="S");

    system("pause");
}
