class Shape {};

class Circle: public Shape {};

void draw(Shape* shape){
  // ...
}

int main(){

  Circle* c = new Circle();
  
  // Call with a Circle* parameter instead of the declared Shape*
  draw(c);
  
  return 0;
}