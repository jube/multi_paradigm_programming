namespace foo {
  namespace v1 {
    class C; // old declaration of class foo::C
  }
  inline namespace v2 {
    class C; // new declaration of class foo::C
  }
}
