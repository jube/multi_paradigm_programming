struct B {
  virtual void f(int);
  virtual void g(int);
};

struct D : B {
  virtual void f(int) override; // D::f(int) overrides B::f(int)
  /* virtual void f(long) override; */ // Error
  void g(int) final;
};

struct A : D {
  /* void g(int); */ // Error
};
