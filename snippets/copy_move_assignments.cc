struct A {
  std::string s;
  int k;

  /* ... */

  A& operator=(const A& other) {
    s = other.s;
    k = other.k;
    return *this;
  }

  A& operator=(A&& other) {
    std::swap(s, other.s);
    std::swap(k, other.k);
    return *this;
  }
};
