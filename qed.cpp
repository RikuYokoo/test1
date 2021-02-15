#include <iostream>
using namespace std;

class sample{
  public:
    sample();
    ~sample();
    void set(int set_num);
    int get();
  private:
    int num=0;
};
sample::sample(){
  std::cout << "コンストラクタ" << endl;
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
int main(){
  sample sam;
  int num=49;
  sam.set(num);
  std::cout << sam.get() << std::endl;

  return 0;
}
