#include<iostream>
using namespace std;
int interes(int n,int b,float i)
{
    int a;
    if(n==0)
    return b;
    else{
    a=interes(n-1,b,i);
    return a*i+a;
    }

}
int main()
{
 float a,b,c,n,i;
 cout<<"--------------Programa que calcula el interes compuesto------\n";
 cout<<"ingrese el numero de años>>";
 cin>>n;
 cout<<"\n ingrese el monto>>";
 cin>>b;
 cin>>i;
 i=i/100;
c=interes(n,b,i);
cout<<c;
}
