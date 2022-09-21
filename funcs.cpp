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

  for (int row = 0; row < height; row++) {
    for (int col = 0; col < width; col++) {

      bool start = false;

      //if odd, print on one line (no space to start)
      //if even, print on the following line (space to start)
      
      if (row % 2 == 0) {
	start = true;
	while (start) {
          std::cout << " *";
        }
      } else if (row % 2 != 0) {
        std::cout << "* ";
      }
    
    }
  }
  return 0;
}
  
