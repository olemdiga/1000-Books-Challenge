/*
Write a program that searches for a vector element using the std::find() algorithm 
function. If the element has been found, delete it. Print out the vector content.
  */

#include <iostream>
#include <vector>
#include <algorithm>

int main(){
    std::vector<int> v = { 10, 5, 8, 4, 1, 2 };
    int findnumber = 4;
 
    auto foundit = std::find(std::begin(v), std::end(v), findnumber);

    if (foundit != std::end(v)){
        std::cout << "Element found. Deleting the element." << '\n';
        v.erase(foundit);
        std::cout << "Element deleted." << '\n';
    } else{
        std::cout << "Element not found." << '\n';
    }

  for (auto el : v){
     std::cout << el << '\n';
  }
}
