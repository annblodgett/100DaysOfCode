#include <iostream>  
#include <fstream>
using namespace std;

/* A program to find the sum of the fuel requirements for all the modules on Santa's spacecraft.
https://adventofcode.com/2019/day/1

Fuel required to launch a given module is based on its mass. Specifically, to find the fuel required for a module, take its mass, divide by three, round down, and subtract 2.

Tests

For a mass of 12, divide by 3 and round down to get 4, then subtract 2 to get 2.
For a mass of 14, dividing by 3 and rounding down still yields 4, so the fuel required is also 2.
For a mass of 1969, the fuel required is 654.
For a mass of 100756, the fuel required is 33583. 

Fuel itself requires fuel just like a module - take its mass, divide by three, 
round down, and subtract 2. However, that fuel also requires fuel, 
and that fuel requires fuel, and so on. Any mass that would require negative fuel should 
instead be treated as if it requires zero fuel; 

A module of mass 14 requires 2 fuel. This fuel requires no further fuel 
(2 divided by 3 and rounded down is 0, which would call for a negative fuel)
, so the total fuel required is still just 2.

At first, a module of mass 1969 requires 654 fuel. 
Then, this fuel requires 216 more fuel (654 / 3 - 2).
216 then requires 70 more fuel, which requires 21 fuel, 
which requires 5 fuel, which requires no further fuel. 
So, the total fuel required for a module of mass 1969 is 654 + 216 + 70 + 21 + 5 = 966.
The fuel required by a module of mass 100756 and its fuel is: 33583 + 11192 + 3728 + 1240 + 411 + 135 + 43 + 12 + 2 = 50346.

*/


// Function to individually calculate the fuel needed for each module 
  int fuelCounterUpper(int mass){
    int result;
    result = (mass/3)-2;
    return result;
}

int main() {  


int sum = 0;
int x; // variable to store input from file while working on it

//open the input file
ifstream numbersfile;
numbersfile.open("numbers.txt");

//Throw an error if the file doesn't open
if(!numbersfile.is_open()){
    cout<<"File failed to open"<<endl;
    return 0;
}

/* Individually calculate the fuel needed for the mass 
of each module, and sum all the fuel values.*/
while (numbersfile>>x){
  //std::cout<<"The number read from the file is: "<<x<< endl;
  int fuelForModule;
  fuelForModule = fuelCounterUpper(x);
 // std::cout<<"The fuel needed for this module is: "<<fuelForModule<<std::endl;
   sum = sum+fuelForModule;
 // std::cout<<"The sum of the total fuel needed is now : "<<sum<<std::endl; 
  while(fuelCounterUpper(fuelForModule)>0){
 	fuelForModule = fuelCounterUpper(fuelForModule);
 //	std::cout<<"The fuel module variable is *now*: "<<sum<<std::endl;
 	sum = sum+fuelForModule;
 	//std::cout<<"The sum of the total fuel needed is now : "<<sum<<std::endl; 
}
}

//Print the answer.
cout<<"The total fuel needed is: "<<sum<<endl;

//close input file
numbersfile.close();

  return 0;
}