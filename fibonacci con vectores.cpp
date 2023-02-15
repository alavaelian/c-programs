#include<iostream>
using namespace std;
int main(){
int i,n;
cout<<"\t\t SUCECION DE FIBONACCI";
cout<<"\nIngrese cuantos valores decea>>";
cin>>n;
int vector[n];
vector[0]=0;
vector[1]=1;
 cout<<vector[0]<<" "<<vector[1]<<" ";
    for(i=2;i<n;i++){


    vector[i]=vector[i-1]+vector[i-2];
    cout<<vector[i]<<" ";

}

}
