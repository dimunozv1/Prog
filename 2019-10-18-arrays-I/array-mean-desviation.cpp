#include <iostream>
#include <cmath>

int main(void)
{
  int N = 10;
  int ii= 0;
  double sum = 0.0;
  int billy[10] ={1,1,1,1,1,1,1,1,1,1};
  while( ii <=9){
    sum+=billy[ii];
    ++ii;
    
  }
    
  sum = sum/10;
  std::cout << "average =  "<< sum << "\n";
  double d= 0.0;

  for(ii = 0; ii<=9; ii++){
    d+= std::pow(billy[ii]-sum,2);
    
  }
  d= std::sqrt(d/N);
  std::cout << "std dev = " << d << "\n";


  return 0;
}

