
////////// DO NOT EDIT HEADER! //////////
#include <iostream>                    //
#include "CTurtle.hpp"                 //
#include "CImg.h"                      //
using namespace cturtle;               //
using namespace std;                   //
/////////////////////////////////////////

/**
 * @param dist, integer 
 * @param rule, integer
 * @param depth, integer
 * @param t, Turtle
 * @return A drawing of the Hilbert Curve
 */
void Hilbert(int dist, int rule, int angle, int depth, Turtle& t) {
  
  //add function definitions below
  
  if (depth > 0) {
    if (rule == 1) {
      //rule1 code
      t.left(angle);
      Hilbert(dist, 2, angle, depth - 1, t);
      t.forward(dist);
      t.right(angle);
      Hilbert(dist, 1, angle, depth - 1, t);
      t.forward(dist);
      Hilbert(dist, 1, angle, depth - 1, t);
      t.right(angle);
      t.forward(dist);
      Hilbert(dist, 2, angle, depth - 1, t);
      t.left(angle);
    }
    if (rule == 2) {
      //rule2 code
      t.right(angle);
      Hilbert(dist, 1, angle, depth - 1, t);
      t.forward(dist);
      t.left(angle);
      Hilbert(dist, 2, angle, depth - 1, t);
      t.forward(dist);
      Hilbert(dist, 2, angle, depth - 1, t);
      t.left(angle);
      t.forward(dist);
      Hilbert(dist, 1, angle, depth - 1, t);
      t.right(angle);
     }
  }
  
  //add function definitions below
  
}

int main(int argc, char** argv) {
  
  //add code below this line
  
  TurtleScreen screen(400, 300);
  Turtle tina(screen);
  tina.speed(TS_FASTEST);
  Hilbert(8, 1, 90, 4, tina);
  
  //add code above this line
  
  screen.exitonclick();
  return 0;
  
}