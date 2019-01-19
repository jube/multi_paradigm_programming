void print_num(int i) {
  std::cout << i << '\n';
}
struct PrintNum {
  void operator()(int i) const { std::cout << i << '\n'; }
};
int main() {
  // store a free function
  std::function<void(int)> f_display = print_num;
  f_display(-9);
  // store a lambda
  std::function<void(int)> f_display_lambda = [](int i) {
      print_num(i);
  };
  f_display_lambda(42);
  // store a call to a function object
  std::function<void(int)> f_display_obj = PrintNum();
  f_display_obj(18);
}
