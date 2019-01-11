struct A {
  std::string s;
  int k;

  A()
  : s("test"), k(-1)
  { }

  A(const A& o)
  : s(o.s), k(o.k)
  { std::cout << "move failed!\n"; }

  A(A&& o) noexcept
  : s(std::move(o.s))        // explicit move (class type)
  , k(std::exchange(o.k, 0)) // explicit move (non-class type)
  { }
};
