struct Abstract {
  virtual void f() = 0;
};

struct Concrete : Abstract {
  void f() override;
};
