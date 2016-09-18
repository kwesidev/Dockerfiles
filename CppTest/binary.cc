#include "binary.h"



std::string Binary::Convert(int decimal  )
{
  std::string binary("");
  if (decimal) {
   binary = Convert(decimal>>1);
    if( decimal & 1 ) 
         binary += static_cast<char>(ON);
       else
         binary += static_cast<char>(OFF);  
}

 return binary;
}