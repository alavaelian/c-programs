//sumar los digitos pares de la
//serie de fibonacci que no exeda 
//el numero de cuatro millones
//sin verificar si cada numero es par
#include <iostream>
int main (int argc, char *argv[])
{
  int limite=4000000;
  int suma=0;
  int a=1, b=1,c=0;
  c=a+b;
  while(c<limite)
  {
    suma=suma+c;
    a=b+c;
    b=c+a;
    c=a+b;
  }
  std::cout<<suma;
  return 0;
}
