/*
Name: Tyler Zhang
Program Name: Math Functions Lab
Date: 12/3/24
Extra: None
*/
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    // Problem 1:
    /*
    The path of a projectile in a video game bouncing across the bottom of the screen is modeled by the equation f(x) = 3 |x - 2| + 3, where x is the time since the program was run and f(x) is the y position of the projectile. 
    When the y-position is 5, how much time has passed?
    */ 
    float ypos = 5;
    ypos -= 3;
    // divides both sides of the equation by 3
    ypos /= 3.0;
    ypos = -ypos;
    float ans1 = ypos + 2;
    float ans2 = abs(ypos) + 2;
    cout << "The answers to Problem 1 are " << ans1 << " and " << ans2 << endl;

    // Problem 2:
    /*
    Alice is at the point (3, 4) and travels to a point which is 3 units left and 4 units up from her.
    However, she doesn’t want to travel 7 units because that would take her too long. 
    What is the least amount of units she needs to travel to get to the point she wants to get to?
    */
    int a = 3;
    int b = 4;
    // utilizes cmath library's hypot function to give a hypotenuse with two triangle side lengths
    cout << "The answer to Problem 2 is " << hypot(a, b) << endl;

    // Problem 3:
    /*
    Bob is thinking of a number x. 
    When 3 is raised to the power of x, he says this will be 81. 
    What number was Bob thinking of?
    */
    int c = 3;
    int d = 81;
    // calculates logbase3(81) by using the rule where it is equal to the natural log of 81 / natural log of the base (3)
    cout << "The answer to Problem 3 is " << log(81) / log(3) << endl;
    return 0;
}