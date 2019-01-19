class Foo {
public:
  Foo();
private:
  struct Impl;
  std::unique_ptr<Impl> m_impl;
};

/* ... */

struct Foo::Impl {
  // ...
};
