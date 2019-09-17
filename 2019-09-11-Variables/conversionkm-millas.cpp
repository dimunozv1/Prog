#include <iostream>

int main (void)
{
  double x = 0.0;
  std::cout << "Enter number of miles : "<< std::endl ;
  std::cin >> x ;
  std::cout << "that is : " << x*1.609 << " km" << std::endl;
  
  return 0;
}

