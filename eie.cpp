#include <iostream>
using namespace std;

class sample{
  public:
    sample();
    ~sample();
    void set(int set_num);
    int get();
    void all();
  private:
    int number[100];
    int num=0;
};
sample::sample(){
  std::cout << "コンストラクタ" << endl;
  for(int i=0;i<100;i++){
    number[i]=0;
  }
}

sample::~sample(){
  std::cout << "デストラクタ" << endl;
}

void sample::set(int set_num){
  num = set_num;
}

int sample::get(){
  return num;
}
void sample::all(){
  for(int i=0;i<10;i++){
    std::cout << number[i];
  }
  std::cout << std::endl;
}
int main(){
  sample sam;
  int num=49;
  sam.set(num);
  std::cout << sam.get() << std::endl;
  sam.all();

  return 0;
}
