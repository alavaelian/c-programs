#include<iostream>
using namespace std;
float vector (int vector1[]){
    int i,c;
    for (i=1;i<6;i++)
	{
		vector1[i]=vector1[i]+vector1[i-1];
	}
    c=vector1[5];
	return c;
}

 int main ()
{
	int vector1[6]={1,2,3,4,5,6},z;
	z=vector(vector1);
    cout<<z;
}
