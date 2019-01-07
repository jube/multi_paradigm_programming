struct X {
  X& operator++();    // prefix ++
  X  operator++(int); // postfix ++
};

X operator+(const X& lhs, const X& rhs);

