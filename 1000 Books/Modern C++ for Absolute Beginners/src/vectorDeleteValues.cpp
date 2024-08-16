/*
Write a program that defines a vector of integers. Erase the range of three elements 
starting from the beginning of the vector. Print out the vector content using the range￾based for loop
*/

#include <iostream>
#include <vector>

int main(){
   std::vector<int> v = { 10, 5, 8, 4, 1, 2 };
   v.erase(v.begin(), v.begin() + 3); // erase the first 3 elements

  for (auto el : v){
     std::cout << el << '\n';
  }
}

/*
In this case, the .erase() function overload accepts two arguments. One is the 
beginning of the range to be deleted. In our case, it is marked with v.begin(). The 
second argument is the end of the range to be deleted. In our case, it is the v.begin() + 
3 iterator. Please note that instead of the .begin() member function, we could have used 
a freestanding std::begin(v) function
*/
