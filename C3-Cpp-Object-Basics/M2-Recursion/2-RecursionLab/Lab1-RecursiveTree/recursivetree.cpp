////////// DO NOT EDIT HEADER! //////////
#include <iostream> //
#include "CTurtle.hpp" //
#include "CImg.h" //
using namespace cturtle; //
using namespace std; //
/////////////////////////////////////////
/**
* @param branch_length An integer
* @param angle The angle of degree
* @param t A Turtle object
* @return A drawing symbolizing a tree branch
*/
void RecursiveTree(int branch_length, int angle, Turtle& t) {
    //add function definitions below
    if (branch_length > 5) {
        t.forward(branch_length);
        t.right(angle);
        RecursiveTree(branch_length - 5, angle, t);
        t.left(angle * 2);
        RecursiveTree(branch_length - 5, angle, t);
        t.right(angle);
        t.backward(branch_length);
    }
    //add function definitions above
}

int main(int argc, char** argv) {
    //add code below this line
    TurtleScreen screen(400, 300);
    Turtle tina(screen);
    tina.left(90); //rotates Turtle's original position
    tina.speed(TS_FASTEST); //speeds up Turtle's movement
    RecursiveTree(35, 20, tina);
    //add code above this line
    screen.exitonclick();
    return 0;
}