#include <iostream>  
#include <fstream>
using namespace std;

  int fuelCounterUpper(int mass){
    int result;
    result = (mass/3)-2;
    return result;
}

int main() {  

int sum = 0;
int x;

ifstream numbersfile;
numbersfile.open("numbers.txt");


if(!numbersfile.is_open()){
    cout<<"File failed to open"<<endl;
    return 0;
}

while (numbersfile>>x){
	//std::cout<<"The number read from the file is: "<<x<< endl;
  int fuelForModule;
  fuelForModule = fuelCounterUpper(x);
  //std::cout<<"The fuel needed for this module is: "<<fuelForModule<<std::endl;
   sum = sum+fuelForModule;
  // std::cout<<"The sum of the total fuel needed is now : "<<sum<<std::endl; 
}

cout<<"The total fuel needed is: "<<sum<<endl;

  return 0;
}