#include <iostream>
#include <vector>

const int Nnumero = 4;



int main(void){
  std::vector <int> numeros;

  
   for(int ii = 0; ii<Nnumero ; ++ii){
     

    std::cout << "Enter a number between 10 and 100 " <<"\n";

    //for(int jj = 1; jj< ii; ++jj){

      //if(
    int num;
    std::cin >> num;
    numeros.push_back(num);

   
  }
  for(int ii=0; ii<Nnumero ; ++ii){
    std::cout << numeros[ii]<< "\t";
      
    }


  
  return 0;
}



	   
