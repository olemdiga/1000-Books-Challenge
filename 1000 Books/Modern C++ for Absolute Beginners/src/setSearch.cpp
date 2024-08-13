/*
Write a program that searches for a particular value in a set using the set’s .find() 
member function. If the value is found, delete it. Print out the set content.
*/

#include <iostream>
#include <set>

int main(){
    std::set<int> myset = { -10, 1, 3, 5, 6, 9, 15 };
    int findvalue = 5;

    auto foundit = myset.find(findvalue);
   if (foundit != myset.end()){
      std::cout << "Value found. Deleting the value..." << '\n';
      myset.erase(foundit);
     std::cout << "Element deleted." << '\n';
    }else{
       std::cout << "Value not found." << '\n';
    }

    for (auto el : myset){
       std::cout << el << '\n';
    }
}
