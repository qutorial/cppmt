class Resource{
  int* r;
public:
  Resource(){
    r = new int(0);
  }
 
 ~Resource(){
    delete r;
  }    
};

int main(){
  Resource a;  
  
  // Pointers b.r and a.r are equal now.
  Resource b = a; 
  return 0;
  // Here the two constructor calls happen.
  // The second call crashes the program.
}