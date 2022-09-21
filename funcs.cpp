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

  //make a checkerboard with height rows and width columns
  //iterating row by row

  for (int row = 0; row < height; row++) {
    for (int col = 0; col < width; col++) {

      // row/col
      //if odd/odd or even/even, star
      //if odd/even or even/odd, space

      if (row % 2 != 0 && col % 2 != 0) {
        if (row < height){
          std::cout << star;
        }
      } else if (row % 2 != 0 && col % 2 == 0) {
        if (row < height){
          std::cout << space;
        }
      } else if (row % 2 == 0 && col % 2 == 0){
        if (row < height){
          std::cout << star;
        }
      } else if (row % 2 == 0 && col % 2 != 0){
        if (row < height){
          std::cout << space;
        }
      }
    }
    //after each row iteration, go to next line
    std::cout << std::endl;
  }
  return 0;
}

//TASK C

std::string cross(int size){
  
  std::string star = "*";
  std::string space = " ";

   for (int row = 0; row < size; row++) {
    for (int col = 0; col < size; col++) {

      if (row == col){
	std::cout << star;
      } else {
	std::cout << " ";
      }
    }
    std::cout << std::endl;
   }
   return 0;
}
    

      
  

  
