#include <iostream>
#include <string>
using namespace std;

template <typename T> void print(T value) { cout << value << endl; }

int main() {

  print<int>(5);
  print<string>("hello");
  print<float>(5.5f);

  return 0;
}
