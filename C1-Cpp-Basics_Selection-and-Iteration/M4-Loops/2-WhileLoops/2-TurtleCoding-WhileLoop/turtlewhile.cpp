////////// DO NOT EDIT HEADER! //////////
#include <iostream>                    //
#include "CTurtle.hpp"                 //
#include "CImg.h"                      //
using namespace cturtle;               //
using namespace std;                   //
/////////////////////////////////////////

int main(int argc, char** argv) {
  
  TurtleScreen screen(400, 300); //You may edit the dimensions to fit your window
  Turtle tina(screen);
  
  //add code below this line

  // Challenge 1
  // tina.pencolor({"blue"});
  // tina.speed(TS_NORMAL);
  // tina.width(2);
  // tina.shape("arrow");	
  // int i=0;
  // while (i<4)
  // {
  //   int j=0;
  //   tina.forward(150);
  //   while(j<3)
  //   {
  //     tina.right(90);
  //     tina.forward(30);
  //     j++;
  //   }
  //   i++;
  // }

  // Challenge 2
  // tina.pencolor({"red"});
  // tina.speed(TS_FASTEST);
  // tina.width(2);
  // tina.shape("square");	
  // double PI = 3.14;
  // double radius = 100.0;
  // int i = 0;
  // while (i<360)
  // {
  //   tina.forward(radius*PI/180.0);
  //   tina.right(1);
  //   i++;
  // }

  // Challenge 3
  tina.pencolor({"green"});
  tina.speed(TS_NORMAL);
  tina.width(2);
  tina.shape("triangle");
  int len = 5;
  int i=0;
  while (i<40)
  {
    tina.forward(len);
    tina.right(90);
    len+=5;
    i++;
  }	

  //add code above this line
  
  screen.exitonclick();
  return 0;
  
}
