/*
Write a program that defines a vector of integers. Erase the second element from the 
vector. Print out the vector content using the range-based loop.
*/

#include <iostream>
#include <vector>

int main(){
    std::vector<int> v = {10, 5, 8, 4, 1, 2};
    v.erase(v.begin() +1);  //erase the second element

  for(auto el: v){
    std::cout << el <<'\n';
  }
}
