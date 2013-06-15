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
  Resource b = a; // b.r is the same address as a.r  
  return 0;
}