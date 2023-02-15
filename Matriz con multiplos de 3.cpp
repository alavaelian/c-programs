//llena una matriz con multiplos del 3
#include<iostream>
using namespace std;
int main ()
{
    int matriz1[5][5],j,i,z;
        for(i=0;i<5;i++){
        for(j=0;j<5;j++){

            matriz1[i][j]=matriz1[0+i][j-1]+3;



        }

    }
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            cout<<matriz1[i][j]<<" ";
        }
        cout<<endl;
    }
}
