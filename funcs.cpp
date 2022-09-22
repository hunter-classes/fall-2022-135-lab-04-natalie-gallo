//This is the functions file.

#include <iostream>
#include "funcs.h"

//TASK A

std::string box(int width, int height){

  std::string output = "";

  for (int row = 0; row < height; row++) {
    for (int col = 0; col < width; col++) {
      output = output + "*";
    }
    output = output + " \n";
  }

  return output;
}

//TASK B

std::string checkerboard(int width, int height){

  std::string star = "*";
  std::string space = " ";

   std::string output = "";

  //make a checkerboard with height rows and width columns
  //iterating row by row

  for (int row = 0; row < height; row++) {
    for (int col = 0; col < width; col++) {

      // row/col
      //if odd/odd or even/even, star
      //if odd/even or even/odd, space

      if (row % 2 != 0 && col % 2 != 0) {
        if (row < height){
          output += star;
        }
      } else if (row % 2 != 0 && col % 2 == 0) {
        if (row < height){
          output += space;
        }
      } else if (row % 2 == 0 && col % 2 == 0){
        if (row < height){
          output += star;
        }
      } else if (row % 2 == 0 && col % 2 != 0){
        if (row < height){
          output += space;
        }
      }
    }
    //after each row iteration, go to next line
    output += "\n";
  }
  return output;
}

//TASK C

std::string cross(int size){
  
  std::string star = "*";
  std::string space = " ";
  std::string output = "";


  for (int row = 1; row <= size; row++) {
    for (int col = 1; col <= size; col++) {

      //if row == col, print star
      //diagonal: size - row = col --> (row, col)

      if (row == col || col == (size + 1 - row)){
        output += star;
      }
      else {
        output += space;
      }
    }
    //When reach end of row size, go to next row
    output += "\n";
   }
   return output;
}

//TASK D

std::string lower(int length){

  std::string output = "";

  std::string star = "*";
  std::string space = " ";

  for (int row = 0; row < length; row++) {
    for (int col = 0; col < length; col++) {
      if (col <= row){
        output += star;
      }
      else {
        output += space;
      }
    }
    output += "\n";
  }
  return output;
}

//TASK E

std::string upper(int length){

  std::string star = "*";
  std::string space = " ";
  std::string output = "";

  for (int row = 0; row < length; row++) {
    for (int col = 0; col < length; col++) {
      if (col >= row){
        output += star;
      }
      else {
        output += space;
      }
    }
    output += "\n";
  }
  return output;
}

//TASK F

std::string trapezoid(int width, int height){

  std::string output = "";

  bool start = false;

  if (height > width/2 || height <= 0){
    std::cout << "Impossible Shape!";
    start = false;
  } else {
      start = true;
  }

  if (start) {
    
    int spaces = 0;
    int stars = width;

    for (int row = 0; row < height; row++){
      for (int i = 0; i < spaces; i++){
	output += " ";
      }
      for (int col = 0; col < stars; col++){
	output += "*";
      }
      stars = stars - 2;
      spaces = spaces + 1;
      output += "\n";
    }
  }
  return output;
}

//TASK G

std:string checkerboard3x3(int width, int height){

  bool print = false;
  
  for (int row = 0; row < height; row++) {
    if (row % 3 == 0){
      print = true;
    }

    if (print){
      for (int i = row; i <= row - 3; i--){
        std::cout << "*";
      }
    }
    for (int col = 0; col < width; col++){
      std::cout << "*";
      if (col % 3 == 0){
        for (int j = col; j <= col - 3; j--){
          std::cout << "*";
        }
      } else {
        std::cout << " ";
      }
    }
    std::cout << std::endl;
  }

  return 0;
}

  
					       
      

  
  

  
