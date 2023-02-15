//Sumar los digitos pares de la
//serie de fibonacci que no exeda
//el numero cuatro millones
#include <iostream>
 int main (int argc, char *argv[])
{
  long int limite=4000000;
  long int suma=0;
  int a=1, b=1,h=0;
  while (b<limite)
  {
    if(b%2==0)
    {
      suma=suma+b;
    }
    h=a+b;
    a=b;
    b=h;
  }
  std::cout<<suma;
  return 0;
}
