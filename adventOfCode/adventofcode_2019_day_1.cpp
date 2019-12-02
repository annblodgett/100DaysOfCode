#include <iostream>  

  int fuelCounterUpper(int mass){
    int result;
    result = (mass/3)-2;
    return result;
}

int main() {  

std::cout<< fuelCounterUpper(12)<<std::endl;
std::cout<< fuelCounterUpper(14)<<std::endl;
std::cout<< fuelCounterUpper(1969)<<std::endl;
std::cout<< fuelCounterUpper(100756)<<std::endl;
  return 0;
}