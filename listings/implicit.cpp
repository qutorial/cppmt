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

void print(Circle c) {
  cout << "The perimeter is: " << c.getPerimeter();
}

/*
 * Use case by user of the API 
 */

int main(){
  print(5);  //Prints "The perimeter is: 31.4"
  return 0;  
}