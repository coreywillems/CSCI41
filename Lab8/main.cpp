#include <algorithm>
#include <functional>
#include <iostream>
#include <queue>
#include <vector>
using namespace std;

class unorderedPQ {
private:
  char *pq;
  int N;

public:
  unorderedPQ(int capacity) { pq = new char[capacity]; }
  ~unorderedPQ() {
    delete[] pq;
    cout << "unPQ Baleted" << endl;
  }

  bool isEmpty() { return N == 0; }

  void insert(char x) { pq[N++] = x; }

  char delMax() {
    int max = 0;
    for (int i = 1; i < N; i++) {
      if (max < i) {
        max = i;
      }
    }
    int newN = N - 1;
    swap(max, newN);
    return pq[--N];
  }

  void printMax() {
    int max = 0;
    for (int i = 1; i < N; i++) {
      if (max < i) {
        max = i;
      }
    }
    int newMax = N - 1;
    cout << newMax;
  }
};

class orderedPQ {
  // an insertion sort algorith in private
private:
  int *opq;
  int N;

public:
  orderedPQ(int capacity) { opq = new int[capacity]; }
  ~orderedPQ() {
    delete opq;
    cout << "orderedPQ Baleted" << endl;
  }
  bool isEmpty() { return N == 0; }

  void insert(int item) { opq[N++] = item; }
  char delMax() {}
};
// public:
//   orderedPQ(int item) { opq = new int[item]; }
//   ~orderedPQ() {
//     delete opq;
//     cout << "orderedPQ Baleted" << endl;
//   }
// };

class heap {
  // sink and swim in private otherwise the same
private:
  int *hp;
  int N;

  void sink() {}
  // void swim(int k) {
  //   while (k > 1 && less(k / 2, k)) {
  //     swap(k, k / 2);
  //     k = k / 2;
  //   }
  // }

public:
  heap(int capacity) { hp = new int[capacity]; }
  ~heap() {
    delete[] hp;
    cout << "heap baleted";
  }
};

template <typename T> void print(T value) { cout << value << endl; }

int main() {
  unorderedPQ uopq(3);
  uopq.insert(5);
  uopq.insert(10);
  uopq.insert(99);
  uopq.delMax();

  orderedPQ opq(2);
  opq.insert(69);
  opq.insert(666);

  heap h(3);
  // h.insert(2);
  // h.insert(1);
  // h.insert(100);

  cout << "is this thing on?" << endl;
  print(5);
  print("hello");
  print(5.5f);
  return 0;
}
