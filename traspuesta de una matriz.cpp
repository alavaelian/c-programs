//programa que calula la matriz inversa de una matriz ingresada por el usuario
#include<iostream>
using namespace std;
int main (){
    int m,n;
    cout<<"         TRASPUESTA DE UNA MATRIZ"<<endl;
    cout<<"Ingrese la cantidad de filas de la matriz>>";
    cin>>n;
    cout<<"Ingrese la cantidad de columnas de la matriz>>";
    cin>>m;
    float matriz1[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<"["<<i<<"}"<<"["<<j<<"]=";
            cin>>matriz1[i][j];
        }
    }
    cout<<"La matriz original es\n";
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<matriz1[i][j]<<" ";
        }
        cout<<endl;
    }
     cout<<"La matriz traspuesta  es\n";
    for(int j=0;j<m;j++){
        for(int i=0;i<n;i++){
            cout<<matriz1[i][j]<<" ";
        }
        cout<<endl;
    }

}
