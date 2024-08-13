/*
Write a program that defines a map of strings and integers. Insert an element into a map 
using the map’s .insert() member function. Then use the map’s operator [] to insert 
another key-value element into a map. Print the map’s content afterward.
*/

#include <iostream>
#include <map>
#include <string>
int main(){
   std::map<std::string, int> mymap = { {"red", 1}, {"green", 20}, {"blue", 15} };
   mymap.insert({ "magenta", 4 });
   mymap["yellow"] = 5;

  for (const auto& el : mymap){
    std::cout << el.first << ' ' << el.second << '\n';
  }
}

/*
When using the map’s [] operator, there are two scenarios. The key inside the [] operator exists in the map. This means we can use it to change the value of an element. The key does not exist.
In this case, when using the map’s operator [], the key-value  element gets inserted into the map. This was the case with our mymap["yellow"] = 5; statement. 
Remember, maps are graphs, and the map’s elements are sorted based on a key. And since our keys are strings, the order does not necessarily need to be the one we provided in the initializer list
*/
