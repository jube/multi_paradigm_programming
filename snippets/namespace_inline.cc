namespace foo {
  inline namespace bar {
    int f(); // foo::bar::f or foo::f
    inline namespace baz {
      int g(); // foo::bar::baz::g or foo::bar::g or foo::g
    }
  }
}
