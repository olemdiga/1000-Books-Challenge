/*
Write a program that defines a map where keys are of type char and values are of type 
int. Print out the map’s content
*/

#include <iostream>
#include <map>

int main(){
  std::map<char, int> mymap = { {'a', 1}, {'b', 5}, {'e', 10}, {'f', 10} };
  
  for (auto el : mymap){
      std::cout << el.first << ' ' << el.second << '\n';
  }
}

/*
Explanation:
Map elements are key-value pairs. These pairs are represented by a std::pair class  template which can store a pair. So the type of a map element is std::pair<char, int>.
In a map container, keys are unique, and values do not have to be unique. We initialize the map with our key-value pairs inside the initializer list {}. 
Using a range-based for loop, we iterate over map elements. To access the key in a pair, we use the pair’s .first member 
function, which represents the first element in a pair – in our case, the key. Similarly, we access the second element using the pair’s .second member function, which represents the map element value.
*/
