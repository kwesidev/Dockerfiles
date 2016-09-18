#include <iostream>
#include "binary.h"

int main(int argc,char**argv)
{
  int num;
  std::cout<<"Decimal to binary convertion"<<std::endl;
  
  std::cin >> num;
  std::cout<<Binary::Convert(num);

}
