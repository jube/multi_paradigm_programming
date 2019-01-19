struct Compare {
  bool operator()(int a, int b) {
    return a < b;
  }
};

struct AddTo {
  int constant;
  AddTo(int value) : constant(value) { }
  int operator()(int x) {
    return x + constant;
  }
};

AddTo adder(10);
int x = adder(1); // 11

