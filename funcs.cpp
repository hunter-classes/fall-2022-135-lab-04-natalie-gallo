//This is the functions file.

#include <iostream>
#include "funcs.h"

//TASK A

std::string box(int width, int height){

  int w = width;
  int h = height;

  for (int i = 0; i < h; i++) {
    for (int i = 0; i < w; i++) {
      std::cout << "*";
    }
    std::cout << std::endl;
  }

  return 0;
}
