#include <iostream>

int main(void)
{
  int billy[1000000]={1};
  std::cout << billy[1] << "\n";
  billy[2] = 7 ;
  return 0;
}
 
//el maximo es aproximadamente 2 millones 100 mil
