class Shape {};

class Circle: public Shape {};

void draw(Shape* shape){
  // Some drawing implementation, 
  // delegating, perhaps, to the object.
}

int main(){

  Circle* c = new Circle();
  
  // A call bellow happens
  // with a Circle* type instead of 
  // the declared Shape* type.
  draw(c);
  
  return 0;
}