#include <iostream>
#include "funcs.h"

int main(){
  
  std::string result;
  result = box(3, 5);
  std::cout << "box(3, 5):\n";
  std::cout << result;
  std::cout << "\n------------------------\n"; // seperator */

  return 0;
}