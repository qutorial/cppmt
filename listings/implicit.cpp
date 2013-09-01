#include<iostream>
using namespace std;

/*
 * API definition 
 */
class Circle{  
private:
  int r;
public:
  Circle(int radius){
    r = radius;
  }

  float getPerimeter(){
    return 2*3.14*r;
  }
};

void printPerimeter(Circle c) {
  cout << "The perimeter is: " << c.getPerimeter();
}

/*
 * Use case by a user of the API 
 */

int main(){
  // Potenitally unexpected behavior:
  printPerimeter(5);  //Prints: "The perimeter is: 31.4" 
  return 0;  
}