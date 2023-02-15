//sumar los digitos pares de la serie
//de fibonacci que no exeda el numero de 
//cuatro millones usando recursion
#include <iostream>
using namespace std;
int fib(int x) {
   if((x==1)||(x==0)) {
      return(x*2);
   }else {
      return(4*fib(x-1)+fib(x-2));
   }
}
int main() {
   int i=0,limite=4000000,suma=0;
   while(fib(i)<limite)
  {
    suma=suma+fib(i);
    i++;
  }
  std::cout <<suma<< std::endl;
   return 0;
}
