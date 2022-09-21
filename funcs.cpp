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

  for (int row = 1; row <= size; row++) {
    for (int col = 1; col <= size; col++) {

      //if row == col, print star
      //diagonal: size - row = col --> (row, col)

      if (row == col || col == (size + 1 - row)){
	std::cout << star;
      }
      else {
	std::cout << space;
      }
    }
    //When reach end of row size, go to next row
    std::cout << std::endl;
   }
   return 0;
}

//TASK D

std::string lower(int length){

  std::string star = "*";
  std::string space = " ";

  for (int row = 0; row < length; row++) {
    for (int col = 0; col < length; col++) {
      if (col <= row){
	std::cout << star;
      }
      else {
	std::cout << space;
      }
    }
    std::cout << std::endl;
  }
  return 0;
}
      
  

  
