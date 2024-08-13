/*   
Write a program that defines a set of integers. Print out the set content and observe 
the following: the data is sorted, regardless of how we define the set. This is because, 
internally, std::set is a sorted container that holds unique values.
*/

#include <iostream>
#include <set>

int main(){
   std::set<int> myset = { -10, 1, 3, 5, -20, 6, 9, 15 };
 
  for (auto el : myset){
     std::cout << el << '\n';
  }
}
