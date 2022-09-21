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

//TASK B

std::string checkerboard(int width, int height){

  std::string star = "*";
  std::string space = " ";

  for (int row = 0; row < height; row++) {
    for (int col = 0; col < width; col++) {

      if (row % 2 != 0) {
        std::cout << space;
        if (row < height) {
          std::cout << star;
        }
      } else if (row % 2 == 0) {
        std::cout << star;
        if (row < height) {
          std::cout << space;
        }
      }
    }
  }
  return 0;
}

  
