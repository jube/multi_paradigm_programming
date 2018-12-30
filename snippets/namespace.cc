namespace foo {
  int f(); // foo::f
  namespace bar {
    int g(); // foo::bar::g
  }
}
