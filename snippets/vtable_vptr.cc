struct A {
  virtual void f();
  virtual void g();
}; // vtable is [ A::f, A::g ]

struct B : A {
  void f() override;
}; // vtable is [ B::f, A::g ]

struct C : A {
  void g() override;
}; // vtable is [ A::f, C::g ]

int main() {
  A a; // vptr -> A::vtable
  B b; // vptr -> B::vtable
  A* c = new C // vptr -> C::vtable
  c->g();
}
