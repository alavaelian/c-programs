#include<iostream>
#include <string>
int  main (int argc, char *argv[])
{
  int s;
  for(int i=0;i<=4;i++)
  {
    for(int j=0;j<=i;j++)
    {
      std::cout << "*";
    }
    std::cout <<std::endl;
  }
  std::cin >> s;
  std::cin >> s;
  return 0;
}
