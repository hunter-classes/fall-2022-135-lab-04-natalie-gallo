#include <iostream>
#include <string>
#include "funcs.h"

int main()
{

  //TASK A
  std::cout << "TASK A \n";
  std::cout << "box(3,5): \n";
  std::cout << box(3, 5);
  std::cout << "\n------------------\n";

  std::cout << "box(7,4): \n";
  std::cout << box(7, 4);
  std::cout << "\n------------------\n";


  //TASK B
  std::cout << "TASK B \n";
  std::cout << "checkerboard(11, 6): \n";
  std::cout << checkerboard(11, 6);
  std::cout << "\n------------------\n";

  std::cout << "checkerboard(13, 7): \n";
  std::cout << checkerboard(13, 7);
  std::cout << "\n------------------\n";

  //TASK C
  std::cout << "TASK C \n";
  std::cout << "cross(8): \n";
  std::cout << cross(8);
  std::cout << "\n------------------\n";

  std::cout << "cross(10): \n";
  std::cout << cross(10);
  std::cout << "\n------------------\n";

  //TASK D
  std::cout << "TASK D \n";
  std::cout << "lower(6): \n";
  std::cout << lower(6);
  std::cout << "\n------------------\n";
  
  std::cout << "lower(8): \n";
  std::cout << lower(8);
  std::cout << "\n------------------\n";

  //TASK E
  std::cout << "TASK E \n";
  std::cout << "upper(5): \n";
  std::cout << upper(5);
  std::cout << "\n------------------\n";

  std::cout << "upper(6): \n";
  std::cout << upper(6);
  std::cout << "\n------------------\n";

  //TASK F
  std::cout << "TASK F \n";
  std::cout << "trapezoid(12, 5): \n";
  std::cout << trapezoid(12, 5);
  std::cout << "\n------------------\n";

  std::cout << "trapezoid(12, 7): \n";
  std::cout << trapezoid(12, 7);
  std::cout << "\n------------------\n";

  //TASK G
  std::cout << "TASK G \n";
  std::cout << "checkerboard3x3(16,11): \n";
  std::cout << checkerboard3x3(16,11);
  std::cout << "\n------------------\n";

  std::cout << "checkerboard3x3(27,27): \n";
  std::cout << checkerboard3x3(27,27);
  std::cout << "\n------------------\n";

  return 0;
}
