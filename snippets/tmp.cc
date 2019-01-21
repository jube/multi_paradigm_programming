template <unsigned n>
struct Factorial {
  static constexpr unsigned value = n * factorial<n - 1>::value;
};

template <>
struct Factorial<0> {
  static constexpr unsigned value = 1;
};

unsigned x = Factorial<10>::value; // 3628800
