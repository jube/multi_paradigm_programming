auto cmp = [](int a, int b) {
  return a < b;
};

int constant  = 10;
auto adder = [constant](int x) { return x + constant };

int x = adder(1); // 11
